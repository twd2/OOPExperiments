#ifndef _SINGLETON_H_
#define _SINGLETON_H_

#include <iostream>

// #define STATIC_VARIABLE 1

#ifndef STATIC_VARIABLE
#include <mutex>
#endif

class Singleton
{
private:
    Singleton();
    Singleton(const Singleton&) = delete;
    Singleton &operator=(const Singleton&) = delete;
    ~Singleton();
    
    #ifndef STATIC_VARIABLE
    static Singleton *instance;
    static std::mutex mtx;
    #endif
public:
    int m_int = 0;
    static Singleton &i();
    void SayHello();
};

#endif // _SINGLETON_H_