# Check if the given three side represents a triangle or not
side1 = float(input("Enter the length of the first side: "))
side2 = float(input("Enter the length of the second side: "))
side3 = float(input("Enter the length of the third side: "))
if (side1 + side2 > side3) and (side1 + side3 > side2) and (side2 + side3 > side1):
        print("YES, Possible")
else:
        print("No, Impossible")