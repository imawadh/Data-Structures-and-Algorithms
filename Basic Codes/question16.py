#Check if N is a prime number or not
n = int(input("Enter a number :  "))
falg = 1
for i in range(2,n-1):
    if(n%i==0):
        falg= 0
        print("No, Not a prime")
        break
if(falg==1):
    print("Yes, Prime")