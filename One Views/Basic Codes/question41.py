# Given a number, calculate sum of its digits
num = int(input("Enter a number : "))
sum = 0
while(num%10>0):
    digit = num%10
    num = num//10
    sum+=digit
print(sum)