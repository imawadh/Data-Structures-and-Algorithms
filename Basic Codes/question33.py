# Print first N terms of a GP with given first term, N and common ration

first_term = int(input("Input First term : "))
n = int(input("Enter number of terms : "))
common_ratio = int(input("Enter Common Ratio : "))
for i in range(n):
    print(first_term*common_ratio**i,end = ' ')