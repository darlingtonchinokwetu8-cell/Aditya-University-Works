#heirachical Inheritance
class Parent:
    def show(self):
        print("Parent")

class child1(Parent):
    def child_one(self):
        print("first child")

class child2(Parent):
    def child_2(self):
        print("second child")

ch=child1()
ch.show()
ch=child2()
ch.show()

