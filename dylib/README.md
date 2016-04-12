# Dynamically Linked Shared Library

今天发布了面向对象程序设计大作业, 其中要求用动态链接库实现算法API, 并且要求支持OS X、Linux、Windows三个平台。

所以, 我们需要支持这三个平台的动态链接库。

这里, 我尝试使用`Makefile`支持了这三个平台的编译。其中, Windows下需要创建一个名为`make`的符号链接。