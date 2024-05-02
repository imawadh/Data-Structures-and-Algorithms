# given two string decide whether one is a permutation of other
str1 = input()
str2 = input()
str1 = list(str1)
str2 = list(str2)
str1.sort()
str2.sort()
if(str1==str2):
    print("Yes, It is Permutation")
else:
    print("No, It is not a Permuation")