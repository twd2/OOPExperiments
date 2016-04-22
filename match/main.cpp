#include "main.h"

int main()
{
    try
    {        
        // load template images
        auto templateFilenames = GetFileNames("templates");
        vector<pair<string, Image> > templates;
        for (string &filename : templateFilenames)
        {
            if (!EndsWith(filename, ".png"))
            {
                continue;
            }
            
            string name = filename.substr(0, filename.length() - 4);
            size_t pos = name.find_last_of("/\\");
            if (pos != string::npos)
            {
                name = name.substr(pos + 1);
            }
            
            templates.push_back(make_pair(name, ReadPNG(filename)));
        }
        
        auto caseFilenames = GetFileNames("testcases");
        string caseFilename;
        
        cerr << "Input image filename [testcases/image20.png]: ";
        getline(cin, caseFilename);
        
        if (caseFilename == "")
        {
            caseFilename = "testcases/image20.png";
        }
        
        Image src = ReadPNG(caseFilename);
        
        size_t m, n;
        
        cerr << "请输入排列方式(ex. 3 5 for 3 rows and 5 columns): ";
        cin >> m >> n;
        
        // m rows, n columns
        size_t blockWidth = src.Width / n, blockHeight = src.Height / m;
        
        TemplateMatchingStrategy tms; 
        
        for (size_t by = 0; by < m; ++by)
        {
            for (size_t bx = 0; bx < n; ++bx)
            {
                Image block(src, blockWidth, blockHeight, blockWidth * bx, blockHeight * by);
                
                string minImage = "";
                double minDiff = -1.0;
                
                for (auto &templatePair : templates)
                {       
                    double currentMatch = tms.Match(block, templatePair.second);
                    if (minDiff < 0 || currentMatch < minDiff)
                    {
                        minImage = templatePair.first;
                        minDiff = currentMatch;
                    }
                }
                cout << minImage << "(" << minDiff << ")" << " ";
            }
            cout << endl;
        }
    }
    catch (string err)
    {
        cerr << err << endl;
    }
    return 0;
}