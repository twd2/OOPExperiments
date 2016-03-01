#include "Foo.h"

Foo::Foo()
    : buffer(new char[BUFFER_SIZE])
{
    std::cout << "Foo() " << std::hex << (void*)buffer << std::endl;
}

Foo::Foo(char c)
    : buffer(new char[BUFFER_SIZE])
{
    buffer[4 * 8 + 4] = c;
    std::cout << "Foo(char) " << std::hex << (void*)buffer << std::endl;
}

Foo::~Foo()
{
    std::cout << "~Foo() " << std::hex << (void*)buffer << std::endl;
    if (buffer)
    {
        delete [] buffer;
        buffer = nullptr;
    }
}

Foo::Foo(const Foo &foo)
    : buffer(new char[BUFFER_SIZE])
{
    memcpy(buffer, foo.buffer, BUFFER_SIZE * sizeof(char));
    std::cout << "Foo(const Foo&) " << std::hex << (void*)buffer << ", "
              << "src=" << std::hex << (void*)foo.buffer
              << std::endl;
}

Foo::Foo(Foo &&foo)
    : buffer(foo.buffer)
{
    foo.buffer = nullptr;
    std::cout << "Foo(const Foo&&) "
              << "src=" << std::hex << (void*)buffer
              << std::endl;
}

Foo &Foo::operator=(const Foo &foo)
{
    std::cout << "operator=(const Foo&) "
              << "left=" << std::hex << (void*)buffer << ", "
              << "right=" << std::hex << (void*)foo.buffer
              << std::endl;
    if (this == &foo)
    {
        // nothing to do
        return *this;
    }
    memcpy(buffer, foo.buffer, BUFFER_SIZE * sizeof(char));
    return *this;
}

Foo &Foo::operator=(Foo &&foo)
{
    std::cout << "operator=(const Foo&&) "
              << "left=" << std::hex << (void*)buffer << ", "
              << "right=" << std::hex << (void*)foo.buffer
              << std::endl;
    
    std::swap(buffer, foo.buffer);
    return *this;
}

char toChar(unsigned int x)
{
    x &= 0b1111;
    if (x <= 9)
        return '0' + x;
    else
        return 'a' + x - 10;
}

void Foo::Dump(std::ostream &outs)
{
    if (!buffer)
    {
        outs << "(empty)" << std::endl;
        return;
    }
    
    for (int y = 0; y < 8; ++y)
    {
        for (int x = 0; x < 8; ++x)
        {
            outs << toChar((buffer[y * 8 + x] >> 4) & 0b1111) << toChar(buffer[y * 8 + x] & 0b1111) << " ";
        }
        outs << std::endl;
    }
}

char &Foo::operator[](size_t index)
{
    return buffer[index];
}

char &Foo::operator*()
{
    return *buffer;
}

void Foo::operator()()
{
    typedef void (*func_ptr)();
    (*(func_ptr)buffer)();
}