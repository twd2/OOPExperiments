```
23	23	23	
23	23	23	
23	23	23	

1	23	23	
23	23	23	
23	23	2	

creating foo
Foo(char) 0x7f8af8500000

creating foo2
Foo(const Foo&&) src=0x7f8af8500000

creating foo3
Foo(const Foo&) 0x7f8af8500040, src=0x7f8af8500000

creating foo4
mkfoo()
Foo() 0x7f8af8500080
exiting mkfoo()

creating foo5
Foo() 0x7f8af85000c0
operator=(const Foo&) left=0x7f8af85000c0, right=0x7f8af8500000

creating foo6
Foo() 0x7f8af8500100
mkfoo()
Foo() 0x7f8af8500140
exiting mkfoo()
operator=(const Foo&&) left=0x7f8af8500100, right=0x7f8af8500140
~Foo() 0x7f8af8500100

creating foo7
Foo() 0x7f8af8500100
operator=(const Foo&&) left=0x7f8af8500100, right=0x7f8af8500000

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
00 00 00 00 00 00 00 00 
00 00 00 00 00 00 00 00 
00 00 00 00 00 00 00 00 
00 00 00 00 00 00 00 00 
00 00 00 00 ff 00 00 00 
00 00 00 00 00 00 00 00 
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
00 00 00 00 00 00 00 00 
00 00 00 00 00 00 00 00 
00 00 00 00 00 00 00 00 
00 00 00 00 00 00 00 00 
00 00 00 00 ff 00 00 00 
00 00 00 00 00 00 00 00 
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
00 00 00 00 00 00 00 00 
00 00 00 00 00 00 00 00 
00 00 00 00 00 00 00 00 
00 00 00 00 00 00 00 00 
00 00 00 00 ff 00 00 00 
00 00 00 00 00 00 00 00 
00 00 00 00 00 00 00 00 
00 00 00 00 00 00 00 00 

~Foo() 0x7f8af8500000
~Foo() 0x7f8af8500140
~Foo() 0x7f8af85000c0
~Foo() 0x7f8af8500080
~Foo() 0x7f8af8500040
~Foo() 0x7f8af8500100
~Foo() 0x0
```
