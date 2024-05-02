# 1.1 =  Implement an algorithm to determine if the string has all unique character ? What if you an not use other data structure 
str = input()
for i in range(len(str)):
    flag = True
    for j in range(len(str)):
        if(i==j):
            continue
        else:
            if(str[i]==str[j]):
                print("NO, Not all Characters are unique.")
                flag = False
                break
    if(flag == False):
        break
if(flag==True):
    print("Yes, All the characters in stting are unique.")