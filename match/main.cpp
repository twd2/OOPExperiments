#include "main.h"

int main()
{
    try
    {
        auto cases = GetFileNames("testcases");
        auto wants = GetFileNames("pic");
        
        string casefn = "testcases/darken.png";//cases[3];
        
        for (string &filename : wants)
        {
            if (!EndsWith(filename, ".png"))
            {
                continue;
            }
            
            unsigned int ww, hw, wc, hc;
            auto vw = ReadPNG(filename, ww, hw),
                 vc = ReadPNG(casefn, wc, hc);
            Image imgW(vw, ww, hw);
            
            BruteforceStrategy bfs;
            double m = -1.0;
            
            for (int oy = 0; oy < 10; ++oy)
            {
                for (int ox = 0; ox < 10; ++ox)
                {
                    Image imgC(vc, wc, hc, ww, hw, ox, oy);
                    double cm = bfs.Match(imgC, imgW);
                    if (m < 0 || cm < m)
                    {
                        m = cm;
                    }
                }
            }
            
            cout << filename << " " << m << endl;
        } 
    }
    catch (string err)
    {
        cerr << err << endl;
    }
    return 0;
}