# Swap two numbers (with or without variables)
a,b = map(int,input().split())
a = a+b
b = a-b
a = a-b
print(f"a = {a} and b = {b}")