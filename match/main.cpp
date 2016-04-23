#include "main.h"

void match(Image &input, vector<pair<string, Image> > &templates, size_t row, size_t column, const shared_ptr<MatchStrategy> &tms)
{
    // row rows, column columns
    size_t blockWidth = input.Width / column, blockHeight = input.Height / row;
    
    for (size_t by = 0; by < row; ++by)
    {
        for (size_t bx = 0; bx < column; ++bx)
        {
            Image block(input, blockWidth, blockHeight, blockWidth * bx, blockHeight * by);
            
            string minImage = "";
            double minDiff = -1.0;
            
            for (auto &templatePair : templates)
            {       
                double currentMatch = tms->Match(block, templatePair.second);
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
        
        size_t m, n;
        
        cerr << "请输入排列方式(ex. 3 5 for 3 rows and 5 columns): ";
        cin >> m >> n;
        
        auto caseFilenames = GetFileNames("testcases");
        
        for (string &filename : caseFilenames)
        {
            if (!EndsWith(filename, ".png"))
            {
                continue;
            }
            
            cout << "====" << filename << "====" << endl;
            
            Image src = ReadPNG(filename);

            cout << "twd2:" << endl;
            match(src, templates, m, n, shared_ptr<MatchStrategy>(new TemplateMatchingStrategy()));
            
            cout << "fsygd:" << endl;
            match(src, templates, m, n, shared_ptr<MatchStrategy>(new FsygdMatchingStrategy()));
            
            cout << "wuhz:" << endl;
            match(src, templates, m, n, shared_ptr<MatchStrategy>(new wuhzMatchingStrategy()));
        }
        
        string caseFilename;
        
        cerr << "Input image filename [testcases/image20.png]: ";
        getline(cin, caseFilename);
        
        if (caseFilename == "")
        {
            caseFilename = "testcases/image20.png";
        }
        
        Image src = ReadPNG(caseFilename);

        cout << "twd2:" << endl;
        match(src, templates, m, n, shared_ptr<MatchStrategy>(new TemplateMatchingStrategy()));
        
        cout << "fsygd:" << endl;
        match(src, templates, m, n, shared_ptr<MatchStrategy>(new FsygdMatchingStrategy()));
        
        cout << "wuhz:" << endl;
        match(src, templates, m, n, shared_ptr<MatchStrategy>(new wuhzMatchingStrategy()));
    }
    catch (string err)
    {
        cerr << err << endl;
    }
    return 0;
}