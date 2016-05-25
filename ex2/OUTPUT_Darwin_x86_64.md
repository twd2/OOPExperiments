```
23	23	23	
23	23	23	
23	23	23	

1	23	23	
23	23	23	
23	23	2	

creating foo
Foo(char) 0x7fdd7ac03200

creating foo2
Foo(const Foo&&) src=0x7fdd7ac03200

creating foo3
Foo(const Foo&) 0x7fdd7ac03240, src=0x7fdd7ac03200

creating foo4
mkfoo()
Foo() 0x7fdd7ac03280
exiting mkfoo()

creating foo5
Foo() 0x7fdd7ac032c0
operator=(const Foo&) left=0x7fdd7ac032c0, right=0x7fdd7ac03200

creating foo6
Foo() 0x7fdd7ac03300
mkfoo()
Foo() 0x7fdd7ac03340
exiting mkfoo()
operator=(const Foo&&) left=0x7fdd7ac03300, right=0x7fdd7ac03340
~Foo() 0x7fdd7ac03300

creating foo7
Foo() 0x7fdd7ac03300
operator=(const Foo&&) left=0x7fdd7ac03300, right=0x7fdd7ac03200

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
00 00 00 00 00 00 00 50 
00 00 00 00 00 00 00 50 
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
00 00 00 00 00 00 00 50 
00 00 00 00 00 00 00 50 
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
00 00 00 00 00 00 00 50 
00 00 00 00 00 00 00 50 
10 00 94 7b ff 7f 00 00 
43 d9 ab 95 ff 7f 00 00 
c8 10 94 7b ff 7f 00 00 
49 d9 ab 95 ff 7f 00 00 
00 00 00 00 00 00 00 00 
00 00 00 00 00 00 00 00 

~Foo() 0x7fdd7ac03200
~Foo() 0x7fdd7ac03340
~Foo() 0x7fdd7ac032c0
~Foo() 0x7fdd7ac03280
~Foo() 0x7fdd7ac03240
~Foo() 0x7fdd7ac03300
~Foo() 0x0
```
