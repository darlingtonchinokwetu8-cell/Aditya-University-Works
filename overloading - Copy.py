class Car:
    def __init__(self,make,model,year):
        self.make=make
        self.model=model
        self.year=year
    def start(self):
        print(f"The {self.year} {self.make} {self.model} is starting .")

    def stop(self):
        print(f"The {self.year} {self.make} {self.model} is stopping.\n")

#Example usage
car1=Car("Nissan","NV350",2022)
car2=Car("Honda","Fit",2023)
car1.start()
car1.stop()
car2.start()
car2.stop()
