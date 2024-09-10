# Print ordered pair which can be formed using first N numbers
num = int(input("Enter a number  : "))
for i in range(num):
    for j in range(num):
        print(f'({i+1},{j+1})',end=' ')

    print()