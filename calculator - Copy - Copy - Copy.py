def add(num1, num2):
    return num1 + num2

def sub(num1, num2):
    return abs(num1 - num2)

def multiplication(num1, num2):
    return num1 * num2

def division(num1, num2):
    if num2 == 0:
        return "Error: Division by zero"
    return num1 / num2

def modulo(num1, num2):
    if num2 == 0:
        return "Error: Modulo by zero"
    return num1 % num2

print("1. Add")
print("2. Subtraction")
print("3. Multiplication")
print("4. Division")
print("5. Modulo")
print("6. Exit")

while True:
    ch = input("\nEnter any one of the choices (1/2/3/4/5/6): ")

    if ch in ('1', '2', '3', '4', '5'):
        try:
            n1 = float(input("Enter first number: "))
            n2 = float(input("Enter second number: "))
        except ValueError:
            print("Please enter valid numbers.")
            continue

        if ch == '1':
            print(f"{n1} + {n2} = {add(n1, n2)}")
        elif ch == '2':
            print(f"|{n1} - {n2}| = {sub(n1, n2)}")
        elif ch == '3':
            print(f"{n1} * {n2} = {multiplication(n1, n2)}")
        elif ch == '4':
            print(f"{n1} / {n2} = {division(n1, n2)}")
        elif ch == '5':
            print(f"{n1} % {n2} = {modulo(n1, n2)}")

    elif ch == '6':
        print("Exiting program.")
        break
    else:
        print("Invalid choice. Please select from 1 to 6.")
