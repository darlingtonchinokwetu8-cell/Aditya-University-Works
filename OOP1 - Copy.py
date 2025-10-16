class Student:
    __rollNumber=538;
    __name="Darlington Chinokwetu"
    def __Show(self):
        #rollNumber=544
        #sprint(rollNumber)
        print("The roll number of the student is : ",self.__rollNumber)
        print("The name of the student is : ",self.__name)
    def display(self):
        self.__Show()
std1=Student()
std1.display()
