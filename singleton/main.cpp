#include <iostream>
#include <thread>
#include "Singleton.h"

using namespace std;

void use_singleton()
{
    for (int i = 0; i < 10; ++i)
    {
        Singleton::i().SayHello();
        cout << endl;
    }
}

int main()
{
    // Singleton sing; // error: calling a private constructor of class 'Singleton'
    
    // Singleton::i() = Singleton::i(); // error: overload resolution selected deleted operator '='
    
    // Singleton sing(Singleton::i()); // error: call to deleted constructor of 'Singleton'
    
    thread thread1(use_singleton);
    thread thread2(use_singleton);
    
    thread1.join();
    thread2.join();
    
    return 0;
}