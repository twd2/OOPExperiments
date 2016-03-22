#include "Singleton.h"

#ifndef STATIC_VARIABLE
Singleton *Singleton::instance = nullptr;
std::mutex Singleton::mtx;
#endif

Singleton::Singleton()
{
    std::cout << "constructing" << std::endl;
}

Singleton::~Singleton()
{
    std::cout << "deconstructing" << std::endl;
}

#ifdef STATIC_VARIABLE
// Implementation 1
Singleton &Singleton::i()
{
    static Singleton instance;
    return instance;
}
#else
// Implementation 2
Singleton &Singleton::i()
{
    if (!instance)
    {
        std::unique_lock<std::mutex> lock(mtx); // TODO: try lock
        if (!instance)
        {
            instance = new Singleton(); // TODO: bad alloc, OoOE
        }
    }
    
    return *instance;
}
#endif

void Singleton::SayHello()
{
    std::cout << "hello, world #" << ++m_int;
}