
# Print a hollow rectangle with asterisks
lenght = 5
breath = 4
for i in range(breath):
    for j in range(lenght):
        if(i==0 or j==0 or j ==lenght-1 or i==breath-1):
            print('*',end=' ')
        else:
            print(' ',end=' ')
    print()