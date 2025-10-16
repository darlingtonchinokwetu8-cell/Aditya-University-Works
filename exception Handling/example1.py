
try:
    num=int(input("Enter a number :"))
    print(f"You entered : {num}")
except ValueError:
    print("That's not a valid number! Please enter and integer.")
print("Program continues after the try-except block.")

