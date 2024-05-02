# Bubble Sort


arr = [1,2,3,9,5,6,3,2]
# b = len(arr)
for i in range(len(arr)-1): # for number of passes l
    flag = True
    for j in range(len(arr)-1-i):
        if(arr[j]>arr[j+1]):
            flag = False
            arr[j],arr[j+1]=arr[j+1],arr[j]
    if(flag==True):
        break
    # b-=1

print(arr)


# Worst Case Cenario  is the the given array is in descending order 

arr = [9,8,7,6,5,4,3,2,1]
b = len(arr)
for i in range(len(arr)-1):
    for j in range(b-1):
        if(arr[j]>arr[j+1]):
            arr[j],arr[j+1]=arr[j+1],arr[j]

    b-=1

print(arr)

