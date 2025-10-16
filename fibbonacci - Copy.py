Varnum=int(input("Enter the number of terms :"))
n1,n2=0,1;
count=0;
if Varnum<=0:
    print("Enter positive number only")
elif Varnum==1:
    print("The Fibonacci series upto ",Varnum,"is :")
    print(n1)
else:
    print("The fibbonacci sequence :")
    while count < Varnum:
        print(n1)
        temp=n1 + n2
        n1=n2
        n2=temp
        count =count +1
    
