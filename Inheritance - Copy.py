class Animal:
    def __init__(self,name):
        self.name=name
    def eat(self):
        print(f"{self.name} is eating")

class Dog(Animal):
    def bark(self):
        print(f"{self.name} is barking ")

class Cat(Animal):
    def meow(self):
        print(f"{self.name} is meowing")

#example usage
dog=Dog("Bruno")
cat=Cat("Whiskers")
dog.eat()
dog.bark()
cat.eat()
cat.meow()
        
