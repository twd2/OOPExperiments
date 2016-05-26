# 虚拟足球俱乐部

虚拟足球俱乐部 9#J3X 球队的经济人又新招了5名队员，他写了下面的代码，为新队员建了一个数组，并输出数组的所有元素。其中字符串是队员的名字，而数字则是队员的年龄。不过有个队员的名字他竟不记得了（他的名字只好用"???"表示，年龄为0）。

请你为“队员”这种对象定义一个类（队员信息的输出格式自定），使程序能编译通过（不得修改main()函数中原有的代码）。要求每个队员的姓名和年龄都是常量。提交完整的源程序（*.CPP, *.H）、MAKEFILE。

```c++
int main()
{
    Member newCommers[5] = { Member("Zhang San", 22),
    Member("Li Si", 19),
    Member("Wang Wu", 18),
    Member("Zhao Liu", 24) };
    for (int i=0; i<5; i++)
        cout << newCommers[i] << endl;
    return 0;
}
```