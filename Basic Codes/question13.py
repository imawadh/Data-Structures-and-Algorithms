# Check job eligibility (must be 18yo and diff category have diff experience)
age = int(input("Enter Age : "))
print('Category A = A \nCategory B = B')
category = input("Enter Categeory : ")
experience = int(input("Enter Experienecre : "))

if age < 18:
    print("You must be at least 18 years oldto apply for any category.")
else:
    if category == "A":
        if experience >= 2:
            print("You are eligible for Category A")
        else:
            print(" You do not have enoughexperience    for Category A.")
    
    elif category == "B":
        if experience >= 5:
            print("You are eligible for Category B")
        else:
            print("You do not have enoughexperience for     Category B.")
    
    else:
        print("Invalid category.")
    
    
    
    