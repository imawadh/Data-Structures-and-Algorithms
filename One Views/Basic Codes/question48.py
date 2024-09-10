# Check if array represents fibonacci sequence or not
values = list(map(int,input().split()))
flag = True
for i in range(2,len(values)):
    if(values[i]==values[i-1]+values[i-2]):
        flag =True
    else:
        flag = False
        break
if(flag==True):
    print("Yes,it is Fabonacci Sequence")
else:
    print("No,it is not a fibonacci Sequence")