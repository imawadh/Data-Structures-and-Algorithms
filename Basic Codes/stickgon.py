# solved 
test = int(input())
for i in range(test):
    num = int(input())
    val = list(map(int,input().split()))
    val.sort()
    # print(val)
    count = 0
    actual = val[0]
    answer = 0
    for i in range(len(val)):
        if(val[i]== actual):
            count+=1
        else:
            answer = answer + count//3
            count = 1
            actual = val[i]
    print(answer+count//3)