#multiple inheritance
class A:
    def methodA(self):
        print("Method of A")

class B:
    def methodB(self):
        print("Method of B")

class C(A,B):
    pass

c=C();
c.methodA()
c.methodB()
