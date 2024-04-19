num = int(input("Enter a Even Number : "))
if(num%2==1):
    num-=1
point1 = num//2
point2 = point1-1
for i in range(num//2):
    for j in range(num):
        if(j==point1):
            print('*',end=' ')
        elif(j==point2):
            print('*',end=' ')
            point2-=1
        else:
            print(' ',end=' ')
    point1+=1  
    if(i!=num//2-1):
        print()
        
for i in range(num//2,num+1):
    for j in range(num):
        if(j==point1 ):
            print('*',end=' ')
            
        elif(j==point2):
            print('*',end=' ')
            
        else:
            print(' ',end=' ')
    point1-=1 
    point2+=1
    print()
