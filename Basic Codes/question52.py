def table(val):
    for i in range(1,11):
        print(f'{val} * {i} = {val*i}')


num = int(input("Enter a number : "))
table(num)