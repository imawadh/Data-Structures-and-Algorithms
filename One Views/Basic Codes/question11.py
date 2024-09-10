'''
Give grade based on marks
A --- marks >=90
B --- 89>= marks >=70
c --- 69>= marks >=50
D --- 49>= marks >=30
E --- marks<=29
'''
marks = int(input())
if(marks >= 90):
    print("A")
elif(marks>=70):
    print("B")
elif(marks>=50):
    print("C")
elif(marks>=30):
    print("D")
else:
    print("E")