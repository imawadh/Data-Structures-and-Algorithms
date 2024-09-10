# Given a number, convert it into binary
num = int(input())
binary = list()

while(num!=1):
    digit = num%2
    binary.append(digit)
    num//=2
binary.append(1)
print(binary[::-1])
    