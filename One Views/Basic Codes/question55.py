str1 = input()
str2 = input()
if (len(str1)==len(str2)):
    flag = True
    for i in range(len(str1)):
        count1=0
        count2=0
        
        for j in range(len(str1)):
            if(str1[j]==str1[i]):
                count1+=1
            if(str2[j]==str1[i]):
                count2+=1
        if(count1!=count2):
            flag = False
            break
    
    if(flag==False):
        print("No, not an Anagram")
    else:
        print("Yes, It is an Anagram")            

else:
    print("No, not an Anagram")