#include "Fans.h"
#include "Notation.h"
#include <iostream> // cin, cout
#include <string> // string
using namespace std;
void action(Fans& somebody)
{
    somebody.say_jiayou();
}
void conduct(Fans** list, int n, Notation& notation)
{
    for (int i=0; i<n; i++)
    {
        if (i % 2) action(*list[i]);
        else list[i]->sing_song(notation);
    }
}
int main()
{
    Spanish s1;
    French s2;
    Portuguese s3;
    German s4;
    English s5;
    Fans* fan_list[5] = {&s1, &s2, &s3, &s4, &s5};
    Notation notation_paper;
    string file_name;
    cin >> file_name;
    notation_paper.load(file_name.c_str()); // load notation from file
    conduct(fan_list, 5, notation_paper);
    return 0;
}
