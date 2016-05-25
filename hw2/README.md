# 格式转换

在计算机自动语音识别研究中，需要对录制的语音数据进行标注，即以文本形式记录语音文件的语义内容(拼音或汉字)。录音时的提示文本格式示例如下:

```
sen001 qing hua da xue zai bei jing
sen002 ming nian shi jian xiao yi bai nian
sen003 wo xi xin kai she xuan xiu ke cheng yi men
```

上面的示例中，`sen001`等表示句子编号，由不含空格的英文和数字组成，在句子编号之后是一个空格，然后是录音文本各个汉字的读音(用空格分隔的拼音串)。在用名为HTK的开源工具包进行后续研究处理时，需要把录音文本转换成下面的标注文本格式:

```
#!MLF!#
"*/sen001.lab"
qing
hua
da
xue
zai
bei
jing
.
"*/sen002.lab"
ming
nian
shi
jian
xiao
yi
bai
nian
.
"*/sen003.lab"
wo
xi
xin
kai
she
xuan
xiu
ke
cheng
yi
men
.
```

在上面的文本中，第一行的`#!MLF!#`是告诉HTK工具这是一个MLF标注格式的文件。后续各行依次是句子编号（编号首尾添加了一些HTK工具需要的字符），各个汉字的读音（要求一个拼音占一行），一个英文句点（表示一句结束），然后紧跟下一句的信息，中间没有多余的空白行。

请你运用所学面向对象程序设计方面的方法和技巧，设计编写一个转换工具，不仅可以在录音的提示文本与语音的标注文本之间进行格式相互转换，而且将来还可以进一步在其他关于这两类文件处理的C++程序中复用你所写的某些代码。

要求工具的命令行参数为:

```shell
convert.exe 1 prompt mlf
convert.exe 2 mlf prompt
```

其中，1表示把提示文本prompt文件转换成标注文本mlf文件；而2则表示把标注文本mlf文件转换成提示文本prompt文件。
