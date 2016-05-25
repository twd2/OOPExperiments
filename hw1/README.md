# 调试工具

支持使用流运算符输出调试信息，即

```c++
Log obj;
obj << “debug message” << endl;
```

支持对调试信息进行分级控制。在程序调试过程中，可以随时改变调试级别。如果调试级别（如error级别）高于某个输出信息的级别（如warning级别），则禁止输出该调试信息；反之则输出相应的调试信息。例如，下面是本题必须支持的一个示例代码片段：

```c++
obj.set_level(“error”); /// 此成员函数的效果是全局性的
obj << level(“warning”) << “WARNING MESSAGE” <<endl;
obj << level(“fatal”) << “BROKEN” <<endl;
```

由于错误级别高低为：fatal > error > warning，所以程序输出为BROKEN。

