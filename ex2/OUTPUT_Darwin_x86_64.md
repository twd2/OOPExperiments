```
23	23	23	
23	23	23	
23	23	23	

1	23	23	
23	23	23	
23	23	2	

creating foo
Foo(char) 0x7fb830c031b0

creating foo2
Foo(const Foo&&) src=0x7fb830c031b0

creating foo3
Foo(const Foo&) 0x7fb830d00000, src=0x7fb830c031b0

creating foo4
mkfoo()
Foo() 0x7fb830d00040
exiting mkfoo()

creating foo5
Foo() 0x7fb830d00080
operator=(const Foo&) left=0x7fb830d00080, right=0x7fb830c031b0

creating foo6
Foo() 0x7fb830d000c0
mkfoo()
Foo() 0x7fb830d00100
exiting mkfoo()
operator=(const Foo&&) left=0x7fb830d000c0, right=0x7fb830d00100
~Foo() 0x7fb830d000c0

creating foo7
Foo() 0x7fb830d000c0
operator=(const Foo&&) left=0x7fb830d000c0, right=0x7fb830c031b0

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
00 00 00 00 00 00 00 80 
00 00 00 00 00 00 00 80 
10 00 48 78 ff 7f 00 00 
43 79 e9 8a ff 7f 00 00 
c8 a0 48 78 ff 7f 00 00 
49 79 e9 8a ff 7f 00 00 
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
00 00 00 00 00 00 00 80 
00 00 00 00 00 00 00 80 
10 00 48 78 ff 7f 00 00 
43 79 e9 8a ff 7f 00 00 
c8 a0 48 78 ff 7f 00 00 
49 79 e9 8a ff 7f 00 00 
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
00 00 00 00 00 00 00 80 
00 00 00 00 00 00 00 80 
10 00 48 78 ff 7f 00 00 
43 79 e9 8a ff 7f 00 00 
c8 a0 48 78 ff 7f 00 00 
49 79 e9 8a ff 7f 00 00 
00 00 00 00 00 00 00 00 
00 00 00 00 00 00 00 00 

~Foo() 0x7fb830c031b0
~Foo() 0x7fb830d00100
~Foo() 0x7fb830d00080
~Foo() 0x7fb830d00040
~Foo() 0x7fb830d00000
~Foo() 0x7fb830d000c0
~Foo() 0x0
```
