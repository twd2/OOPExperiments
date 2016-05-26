#include "Fans.h"

#include <iostream>

void Fans::say_jiayou()
{
    std::cout << "@#$^&*!" << std::endl;
}

void Fans::sing_song(Notation &notation)
{
    std::cout << notation.notation << std::endl;
}

void Spanish::say_jiayou()
{
    std::cout << "animo" << std::endl;
}

void French::say_jiayou()
{
    std::cout << "bon courage" << std::endl;
}

void Portuguese::say_jiayou()
{
    std::cout << "ole" << std::endl;
}

void German::say_jiayou()
{
    std::cout << "gib gas" << std::endl;
}

void English::say_jiayou()
{
    std::cout << "come on" << std::endl;
}
