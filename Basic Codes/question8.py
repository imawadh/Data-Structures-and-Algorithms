# Find the larger number out of three numbers
a,b,c = map(int,input().split())
if(a>=b):
    if(a>=c):
        print(a)
    else:
        print(c)
else:
    if(b>=a):
        if(b>=c):
            print(b)
        else:
            print(c)