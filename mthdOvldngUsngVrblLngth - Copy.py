#method overloading using variable length arguments
class calculator:
    def add(self,*args):
        return sum(args)
Calc=calculator()
print(Calc.add(12,12,12,12,12))
