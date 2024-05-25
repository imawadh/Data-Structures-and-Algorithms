str1 = input()
str1.strip()

for i in range(len(str1)):
    if(str1[i]!=' '):
        print(str1[i],end='')
    else:
        print("%20",end='')
        
        

        