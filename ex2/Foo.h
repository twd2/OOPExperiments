#ifndef _FOO_HPP_
#define _FOO_HPP_

#include <iostream>
#include <cstring>

#define BUFFER_SIZE 64

class Foo
{
private:
    char *buffer;
    
public:
    Foo();
    Foo(char);
    ~Foo();
    Foo(const Foo&);
    Foo &operator=(const Foo&);
    Foo(Foo&&);
    Foo &operator=(Foo&&);
    
    void Dump(std::ostream&);
    
    char &operator[](size_t);
    char &operator*();
    
    void operator()();
};

#endif // _FOO_HPP_