#include <iostream>
#include <string>

using namespace std;

template <typename T>
class FakePtr
{
private:
    
public:
    T Value;
    
    T &operator*()
    {
        return Value;
    }
    
    T *operator->()
    {
        return &operator*();
    }
};

int main()
{
    FakePtr<string> fp;
    *fp = "hello, world";
    cout << fp->length() << endl;
    return 0;
}