```
23	23	23	
23	23	23	
23	23	23	

1	23	23	
23	23	23	
23	23	2	

creating foo
Foo(char) 0x7fc752c032b0

creating foo2
Foo(const Foo&&) src=0x7fc752c032b0

creating foo3
Foo(const Foo&) 0x7fc752c032f0, src=0x7fc752c032b0

creating foo4
mkfoo()
Foo() 0x7fc752c03330
exiting mkfoo()

creating foo5
Foo() 0x7fc752c03370
operator=(const Foo&) left=0x7fc752c03370, right=0x7fc752c032b0

creating foo6
Foo() 0x7fc752c033b0
mkfoo()
Foo() 0x7fc752c033f0
exiting mkfoo()
operator=(const Foo&&) left=0x7fc752c033b0, right=0x7fc752c033f0
~Foo() 0x7fc752c033b0

creating foo7
Foo() 0x7fc752c033b0
operator=(const Foo&&) left=0x7fc752c033b0, right=0x7fc752c032b0

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
10 00 fe 79 ff 7f 00 00 
43 c9 15 94 ff 7f 00 00 
c8 00 fe 79 ff 7f 00 00 
49 c9 15 94 ff 7f 00 00 
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
10 00 fe 79 ff 7f 00 00 
43 c9 15 94 ff 7f 00 00 
c8 00 fe 79 ff 7f 00 00 
49 c9 15 94 ff 7f 00 00 
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
10 00 fe 79 ff 7f 00 00 
43 c9 15 94 ff 7f 00 00 
c8 00 fe 79 ff 7f 00 00 
49 c9 15 94 ff 7f 00 00 
00 00 00 00 00 00 00 00 
00 00 00 00 00 00 00 00 

~Foo() 0x7fc752c032b0
~Foo() 0x7fc752c033f0
~Foo() 0x7fc752c03370
~Foo() 0x7fc752c03330
~Foo() 0x7fc752c032f0
~Foo() 0x7fc752c033b0
~Foo() 0x0
```
