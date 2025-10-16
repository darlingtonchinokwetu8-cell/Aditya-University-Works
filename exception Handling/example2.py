#optional clauses:
#else ---> runs if there is no eception
#finally---> always runs (used for cleanup)
try:
    num=int(input("Enter a number :"))
    print(10/num)
except ZeroDivisionError:
    print("Cannot divide by zero !")
except ValueError:
    print("Invalid Input")
else:
    print("No exceptions occured !")
finally:
    print("Execution complete")
