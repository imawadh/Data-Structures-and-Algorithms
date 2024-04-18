# Print a right triangle with asterisks
height = 5
for i in range(height):
    for j in range(height):
        if(i>=j):
            print('*',end='')
        else:
            print(' ',end=' ')
    print()