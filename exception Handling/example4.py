#exeption class to be raised when a transaction exceeds the amount balance
class InsufficientBalance(Exception):
    pass

def withdrawal(balance,amount):
    if amount>balance:
        raise InsufficientBalance("Insufficient Funds to perfom this transaction")

    return balance-amount

try:
    acc_balance=500000
    acc_balance=withdrawal(acc_balance,200000000)
    print(acc_balance)
except InsufficientBalance as e:
    print(f"Error :{e}")
