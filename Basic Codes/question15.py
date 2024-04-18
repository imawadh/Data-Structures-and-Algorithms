# Calculate N factorial
n = int(input("Enter a non-negative integer: "))
    
if n < 0:
    print("Factorial is not defined for negative numbers.")
else:
    if n == 0:
        print(1)
    else:
        result = 1
        while n > 0:
            result *= n
            n -= 1
        print(result)