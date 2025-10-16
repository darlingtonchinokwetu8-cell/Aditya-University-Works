#polymorphism with user defined classes
class Dog:
    def sounds(self):
        return "Woof!"
class cat:
    def sounds(self):
        return "meow!"
#polymorphic behaviour
for animal in[Dog(),cat()]:
    print(animal.sounds())
