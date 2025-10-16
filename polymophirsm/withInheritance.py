#polymorphism with Inheritance
class Animal:
    def make_sound(self):
        return "Same sound"

class Dog(Animal):
    def make_sound(self):
        return "Woof!"

class Cat(Animal):
    def make_sound(self):
        return "Meow !"

class Bird(Animal):
    def make_sound(self):
        return "Whistles!"

animals=[Animal(),Dog(),Cat(),Bird()]
for a in animals:
    print(a.make_sound())
 
