a = [[7,2],[2,1]]
b = [[2,3],[3,2]]
c = list()
for i in range(2):
    for j in range(2):
        c = 0
        for k in range(2):
            c = c + a[i][k] + b[k][j]
        print(c)