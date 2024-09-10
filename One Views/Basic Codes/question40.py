# Given a number, calculate it's nearest power of two
import math
num = int(input("Enter a number : "))
num1 = int(math.sqrt(num))
num2 = num1+1
# print(num1,num2)
if(num2**2 -num <= abs((num1**2)-num)):
    print(num2)
else:
    print(num1)