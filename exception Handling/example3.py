class NegativeNumberError(Exception):
    """Custom exception for negative numbers"""
    pass

def check_number(num):
    if num<0:
        raise NegativeNumberError("Only positive Numbers are allowed here!")
    else:
        print("Number is positive ")

try:
    check_number(-55)

except NegativeNumberError as e:
    print(f"Error:{e}")
