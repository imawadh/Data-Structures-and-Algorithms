# not solved

matrix = [[1,2,3],[4,5,6],[7,8,9]]
for i in range(len(matrix)):
    for j in range(len(matrix[0])):
        print(matrix[i][j],end=' ')
    print()


row = 0
column = 0
while(row!=column):
 while(column!=len(matrix[0])):
    print(matrix[row][column],end=' ')
    column+=1

 column-=1
 row+=1

 while(row!=len(matrix)):
    print(matrix[row][column],end=' ')
    row+=1
 row-=1
 column-=1

 while(column!=-1):
    print(matrix[row][column],end=' ')
    column-=1
 row-=1
 column+=1

# print(column,row)
 while(row!=0):
    print(matrix[row][column],end='')
    row-=1
