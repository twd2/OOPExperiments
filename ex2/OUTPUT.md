```
23	23	23	
23	23	23	
23	23	23	

1	23	23	
23	23	23	
23	23	2	

creating foo
Foo(char) 0x7f9cb0c03120

creating foo2
Foo(const Foo&&) src=0x7f9cb0c03120

creating foo3
Foo(const Foo&) 0x7f9cb0c03160, src=0x7f9cb0c03120

creating foo4
mkfoo()
Foo() 0x7f9cb0c031a0
exiting mkfoo()

creating foo5
Foo() 0x7f9cb0c031e0
operator=(const Foo&) left=0x7f9cb0c031e0, right=0x7f9cb0c03120

creating foo6
Foo() 0x7f9cb0c03220
mkfoo()
Foo() 0x7f9cb0c03260
exiting mkfoo()
operator=(const Foo&&) left=0x7f9cb0c03220, right=0x7f9cb0c03260
~Foo() 0x7f9cb0c03220

creating foo7
Foo() 0x7f9cb0c03220
operator=(const Foo&&) left=0x7f9cb0c03220, right=0x7f9cb0c03120

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
00 00 00 00 00 00 00 a0 
00 00 00 00 00 00 00 a0 
10 00 cd 79 ff 7f 00 00 
43 89 6e 8c ff 7f 00 00 
c8 b0 cd 79 ff 7f 00 00 
49 89 6e 8c ff 7f 00 00 
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
00 00 00 00 00 00 00 a0 
00 00 00 00 00 00 00 a0 
10 00 cd 79 ff 7f 00 00 
43 89 6e 8c ff 7f 00 00 
c8 b0 cd 79 ff 7f 00 00 
49 89 6e 8c ff 7f 00 00 
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
00 00 00 00 00 00 00 a0 
00 00 00 00 00 00 00 a0 
10 00 cd 79 ff 7f 00 00 
43 89 6e 8c ff 7f 00 00 
c8 b0 cd 79 ff 7f 00 00 
49 89 6e 8c ff 7f 00 00 
00 00 00 00 00 00 00 00 
00 00 00 00 00 00 00 00 

~Foo() 0x7f9cb0c03120
~Foo() 0x7f9cb0c03260
~Foo() 0x7f9cb0c031e0
~Foo() 0x7f9cb0c031a0
~Foo() 0x7f9cb0c03160
~Foo() 0x7f9cb0c03220
~Foo() 0x0
```
