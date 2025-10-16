class Student:
    def __init__(self,name,roll):
        self.name=name
        self.roll=roll

    def __eq__(self,other):
        return self.roll==other.roll  

S1=Student("Anil",101)
S2=Student("Ravi",101)
print(S1==S2)
