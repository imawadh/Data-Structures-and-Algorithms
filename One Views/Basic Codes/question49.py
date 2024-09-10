num = int(input("Enter a Even Number : "))
if(num%2==0):
    num+=1
centre = num//2

for i in range(num):
    for j in range(num):
        dif = abs(centre-i)+abs(centre-j)
        if(dif<=centre):
            print("*",end = ' ')
        else:
            print(" ",end = ' ')
        # print()
    print()