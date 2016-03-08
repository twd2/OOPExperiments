# Experiment 1

这是第一节课的实验。

这节课主要讲了:

1. 多文件程序的组织
2. 编译(+汇编)和链接的命令行
3. Makefile的编写

以及C++中的一些语法:

1. 右值引用
2. 用 {} 来初始化
3. decltype
4. 尾置返回类型的函数

前面三条比较简单, 这里记录一下C++语法中我学到的内容。

右值引用, 个人感觉比较复杂, 我觉得这里[http://jxq.me/2012/06/06/译详解c右值引用/](http://jxq.me/2012/06/06/译详解c右值引用/)讲的比较清楚。

有的时候我们可以用 {} 来进行变量的初始化, 这里网友提供了一个好玩的实验, 请参见main.cpp Line 27~31。

decltype(e), 可以在**编译时**确定表达式e的类型。

尾置返回类型的函数, 配合decltype, 可以在用到了模版的地方使得程序更易读, func.hpp中写了点例子。