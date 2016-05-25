#include "format_mlf.h"

sentences format_mlf::parse(std::istream &ins)
{
    sentences result;
    
    std::string line;
    
    std::getline(ins, line); // #!MLF!#
    
    if (line != "#!MLF!#")
    {
        throw std::string("Unexpected \"") + line +  "\", expecting \"#!MLF!#\"";
    }
    
    while (std::getline(ins, line))
    {
        if (line == "")
        {
            continue;
        }

        sentence sent;
        sent.name = line.substr(std::string("\"*/").length(),
                                line.length() - std::string("\"*/.lab\"").length());

        while (std::getline(ins, line))
        {
            if (line == "")
            {
                continue;
            }
            else if (line == ".")
            {
                break;
            }

            sent.tokens.push_back(line);
        }

        result.push_back(sent);
    }
    
    return result;
}

void format_mlf::write(const sentences &sents, std::ostream &outs)
{
    outs << "#!MLF!#" << std::endl;
    for (const auto &sent : sents)
    {
        outs << "\"*/" << sent.name << ".lab\"" << std::endl;
        for (const auto &token : sent.tokens)
        {
            outs << token << std::endl;
        }
        outs << "." << std::endl;
    }
}