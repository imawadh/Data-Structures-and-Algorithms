# val = list()
m1 = 9
n1 = 6
val = [[i+1 for i in range(m1)]  for j in range(n1)]
print(val)

m2 = 6
n2 = 7
val2 = [[i for i in range(m2)] for j in range(n2)]
print(val2)
if(n1==m2):
    for i in range(n1):
        for j in range(m2):  
            c = 0
            for k in range(m1):
                c = c + val[i][k] + val[k][j]
            print(c ,end = ' ')
        print()
        




