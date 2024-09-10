# Take N number as input and print their sum

values = list(map(int,input().split()))
sum = 0
for i in values:
    sum+=i
print(sum)