#SINGLE LEVEL INHERITANCE
class Animal:
    def sound(self):
        print("Animal Sound")
class Dog(Animal):
    def dog_sound(self):
        print("Barks")

d=Dog()
d.sound()
d.dog_sound()
