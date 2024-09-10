# Calculate abs diff of two numbers
a,b = map(int,input().split())
if(a<b):
    c = a-b
    c = -1*c
else:
    c = a-b
print(c)