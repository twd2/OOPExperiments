#include "format_prompt.h"

#include <sstream>
#include <cstddef>

sentences format_prompt::parse(std::istream &ins)
{
    sentences result;

    std::string line;
    while (std::getline(ins, line))
    {
        if (line == "")
        {
            continue;
        }

        std::stringstream ss(line);

        sentence sent;
        ss >> sent.name;

        std::string token;
        while (ss >> token)
        {
            if (token != "")
            {
                sent.tokens.push_back(token);
            }
        }

        result.push_back(sent);
    }

    return result;
}

void format_prompt::write(const sentences &sents, std::ostream &outs)
{
    for (const auto &sent : sents)
    {
        outs << sent.name << " ";
        for (std::size_t i = 0; i < sent.tokens.size(); ++i)
        {
            outs << sent.tokens[i];
            
            if (i < sent.tokens.size() - 1)
            {
                outs << " ";
            }
        }
        outs << std::endl;
    }
}