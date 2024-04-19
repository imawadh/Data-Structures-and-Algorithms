print("Enter List 1 : ",end =' ')
val1 = list(map(int,input().split()))
print("Enter List 2 : ",end = ' ')
val2 = list(map(int,input().split()))
val3 = list()
[val3.append(item) for item in val1 if item in val2]
print(val3)