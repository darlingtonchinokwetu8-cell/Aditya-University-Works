def fibonnacci(n):
    if n==0 or n==1:
        return 1
    else:
        return fibonnacci(n-1)+fibonnacci(n-2)
number=int(input("Enter the number :"))
for i in range(number):
    print(fibonnacci(i),end=" ")
    
