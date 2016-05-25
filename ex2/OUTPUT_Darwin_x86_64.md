```
23	23	23	
23	23	23	
23	23	23	

1	23	23	
23	23	23	
23	23	2	

creating foo
Foo(char) 0x7fca71403200

creating foo2
Foo(const Foo&&) src=0x7fca71403200

creating foo3
Foo(const Foo&) 0x7fca71500000, src=0x7fca71403200

creating foo4
mkfoo()
Foo() 0x7fca71500040
exiting mkfoo()

creating foo5
Foo() 0x7fca71500080
operator=(const Foo&) left=0x7fca71500080, right=0x7fca71403200

creating foo6
Foo() 0x7fca715000c0
mkfoo()
Foo() 0x7fca71500100
exiting mkfoo()
operator=(const Foo&&) left=0x7fca715000c0, right=0x7fca71500100
~Foo() 0x7fca715000c0

creating foo7
Foo() 0x7fca715000c0
operator=(const Foo&&) left=0x7fca715000c0, right=0x7fca71403200

foo: 
(empty)

foo2: 
f7 00 00 00 00 00 00 00 
00 00 00 00 00 00 00 00 
00 00 00 00 00 00 00 00 
00 00 00 00 00 00 00 00 
00 00 00 00 00 00 00 00 
00 00 00 00 00 00 00 00 
00 00 00 00 00 00 00 00 
00 00 00 00 00 00 00 00 

foo3: 
00 00 00 00 00 00 00 60 
00 00 00 00 00 00 00 60 
10 00 94 7b ff 7f 00 00 
43 d9 ab 95 ff 7f 00 00 
c8 10 94 7b ff 7f 00 00 
49 d9 ab 95 ff 7f 00 00 
00 00 00 00 00 00 00 00 
00 00 00 00 00 00 00 00 

foo4: 
f4 f4 f4 f4 f4 f4 f4 f4 
f4 f4 f4 f4 f4 f4 f4 f4 
f4 f4 f4 f4 f4 f4 f4 f4 
f4 f4 f4 f4 f4 f4 f4 f4 
f4 f4 f4 f4 f4 f4 f4 f4 
f4 f4 f4 f4 f4 f4 f4 f4 
f4 f4 f4 f4 f4 f4 f4 f4 
f4 f4 f4 f4 f4 f4 f4 f4 

foo5: 
00 00 00 00 00 00 00 60 
00 00 00 00 00 00 00 60 
10 00 94 7b ff 7f 00 00 
43 d9 ab 95 ff 7f 00 00 
c8 10 94 7b ff 7f 00 00 
49 d9 ab 95 ff 7f 00 00 
00 00 00 00 00 00 00 00 
00 00 00 00 00 00 00 00 

foo6: 
cc cc cc cc cc cc cc cc 
cc cc cc cc cc cc cc cc 
cc cc cc cc cc cc cc cc 
cc cc cc cc cc cc cc cc 
cc cc cc cc cc cc cc cc 
cc cc cc cc cc cc cc cc 
cc cc cc cc cc cc cc cc 
cc cc cc cc cc cc cc cc 

foo7: 
00 00 00 00 00 00 00 60 
00 00 00 00 00 00 00 60 
10 00 94 7b ff 7f 00 00 
43 d9 ab 95 ff 7f 00 00 
c8 10 94 7b ff 7f 00 00 
49 d9 ab 95 ff 7f 00 00 
00 00 00 00 00 00 00 00 
00 00 00 00 00 00 00 00 

~Foo() 0x7fca71403200
~Foo() 0x7fca71500100
~Foo() 0x7fca71500080
~Foo() 0x7fca71500040
~Foo() 0x7fca71500000
~Foo() 0x7fca715000c0
~Foo() 0x0
```
