```
23	23	23	
23	23	23	
23	23	23	

1	23	23	
23	23	23	
23	23	2	

creating foo
Foo(char) 0x7fac22403270

creating foo2
Foo(const Foo&&) src=0x7fac22403270

creating foo3
Foo(const Foo&) 0x7fac22500000, src=0x7fac22403270

creating foo4
mkfoo()
Foo() 0x7fac22500040
exiting mkfoo()

creating foo5
Foo() 0x7fac22500080
operator=(const Foo&) left=0x7fac22500080, right=0x7fac22403270

creating foo6
Foo() 0x7fac225000c0
mkfoo()
Foo() 0x7fac22500100
exiting mkfoo()
operator=(const Foo&&) left=0x7fac225000c0, right=0x7fac22500100
~Foo() 0x7fac225000c0

creating foo7
Foo() 0x7fac225000c0
operator=(const Foo&&) left=0x7fac225000c0, right=0x7fac22403270

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
00 00 00 00 00 00 00 10 
00 00 00 00 00 00 00 10 
10 00 80 74 ff 7f 00 00 
43 b9 21 87 ff 7f 00 00 
c8 e0 80 74 ff 7f 00 00 
49 b9 21 87 ff 7f 00 00 
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
00 00 00 00 00 00 00 10 
00 00 00 00 00 00 00 10 
10 00 80 74 ff 7f 00 00 
43 b9 21 87 ff 7f 00 00 
c8 e0 80 74 ff 7f 00 00 
49 b9 21 87 ff 7f 00 00 
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
00 00 00 00 00 00 00 10 
00 00 00 00 00 00 00 10 
10 00 80 74 ff 7f 00 00 
43 b9 21 87 ff 7f 00 00 
c8 e0 80 74 ff 7f 00 00 
49 b9 21 87 ff 7f 00 00 
00 00 00 00 00 00 00 00 
00 00 00 00 00 00 00 00 

~Foo() 0x7fac22403270
~Foo() 0x7fac22500100
~Foo() 0x7fac22500080
~Foo() 0x7fac22500040
~Foo() 0x7fac22500000
~Foo() 0x7fac225000c0
~Foo() 0x0
```
