str = input()
start = 0
last = len(str)-1
flag = 1
while(start<last):
    if(str[start]==str[last]):
        start+=1
        last-=1
    else:
        flag = False
        break
if(flag==False):
    print("No, It is not Palindrome")
else:
    print("Yes, It is palindrome")

'''
s==s[::-1]
'''