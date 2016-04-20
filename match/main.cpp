#include "main.h"

vector<unsigned char> ReadPNG(const string &filename, unsigned int &width, unsigned int &height)
{
    vector<unsigned char> image;

    unsigned int error = lodepng::decode(image, width, height, filename.c_str(), LCT_RGB);

    if (error) 
    {
        stringstream ss;
        ss << "decoder error " << error << ": " << lodepng_error_text(error);
        throw ss.str();
    }
    
    return image;
}

int main()
{
    cout << string("hello, ") + 22;
    try
    {
        auto f = GetFileNames("testcases");
        
        for (auto filename : f)
        {
            if (EndsWith(filename, ".png"))
                cout << filename << endl;
        }
        cout << endl;
        
        string filename;
        cin >> filename;
        
        unsigned int w, h;
        auto v = ReadPNG(filename, w, h);
        
        cout << "Read " << w << "x" << h << endl;
        cout << v.size() / w / h * 8 << " bits per pixel" << endl;
    }
    catch (string err)
    {
        cerr << err << endl;
    }
    return 0;
}