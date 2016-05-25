#include <iostream>
#include <fstream>
#include <string>

#include "converter_factory.h"
#include "sentence.h"
#include "sentence_format.h"

using namespace std;

int main(int argc, char **argv)
{
    if (argc < 4)
    {
        cerr << "Usage: " << argv[0] << " <type: 1|2> <input filename> <output filename>" << endl;
        return 1;
    }

    string type = argv[1], infile = argv[2], outfile = argv[3];

    try
    {
        auto conv = converter_factory::create(type);

        ifstream ifs(infile, ios_base::in);
        auto sents = conv.first->parse(ifs);
        ifs.close();

        ofstream ofs(outfile, ios_base::out);
        conv.second->write(sents, ofs);
        ofs.close();
    }
    catch (std::string err)
    {
        cerr << "Error: " << err << endl;
        return 1;
    }

    return 0;
}