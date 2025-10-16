#multilevel inheritance
class A:
    def methodA(self):
        print("A method")
class B(A):
    def methodB(self):
        print("B method")

class C(B):
    def methodC(self):
        print("C method")

c=C();
c.methodA()
c.methodB()
c.methodC()
