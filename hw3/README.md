# 啦啦队！加油！

世界杯开赛啦！一群各国的球迷和伪球迷都兴高采烈地观看球赛，组成了不同规模的啦啦队，为自己钟爱的球队或队员加油。为了有声势，有组织的啦啦队通常还设有一个现场指挥，告诉大家什么时候得喊“加油”、什么时候唱歌。不过，现场环境噪声非常大，指挥有时会把指示打印在纸上给大家看。

然而，不同国家语言差异太大，对于“加油”，来自不同地方的人有不同的说法。经上网查询，发现英国人（English）说的是come on，法国人（French）说的是bon courage，葡萄牙人（Portuguese）说的是ole，西班牙人（Spanish）说的是animo，德国人（German）说的是gib gas等等，当然，如果是火星人，自然就是火星语@#$^&*!。真是好复杂啊！

需要说明的是：唱歌时，纸上打印的是简谱的符号和数字，没有语言障碍。

于是，正在贵系学习OOP的某伪球迷自告奋勇，帮助啦啦队指挥准备了一些不同语言内容的文本文件以供打印。他还运用刚刚有所感悟的抽象思维，用程序来模拟这个复杂的世界。真是用心良苦！可惜，因为他面对即将到来的OOP期中笔试有点担心过度，以至于没有心情把代码写完（真是的，至于嘛！）,甚至也没有什么注释。下面就是他写的部分代码。

请你顺着他的设计思路，按照面向对象的原则和设计方法，补充剩余部分（ 不要删改已有代码），加上必要注释。提交补充完整后的源程序（*.CPP, *.H）、MAKEFILE。

```c++
#include "_______.h"
#include "_______.h"
#include <iostream> // cin, cout
#include <string> // string
using namespace std;
void action(______ somebody)
{
    somebody.say_jiayou();
}
void conduct(______ list, int n, ______ notation)
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
    _______ notation_paper;
    string file_name;
    cin >> file_name;
    notation_paper.load(file_name.c_str());
    conduct(fan_list, 5, notation_paper);
    return 0;
}
```