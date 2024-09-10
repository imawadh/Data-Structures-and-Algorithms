# Calculate cost of booking a train (one-time journey, monthly pass) (sleeper, 3AC, 2AC, 1AC)
print("Monthly Pass = M \nOne-time Pass = O")
train_type = input("Enter the train Type : ")
print("Sleeper = 0\n1AC = 1 \n2AC = 2 \n3AC = 3 ")
train_coach = int(input("Enter the train Coach : "))
print("Sleeper Price = 100\n3AC  Price= 200 \n2AC Price = 300 \n1AC Price = 400")
if(train_type=='M' and train_coach<=3):
    if(train_coach==0):
        price = 30*(100 * 80 /100)

    elif(train_coach==1):
        price = 30*(200 * 80 /100)
         
    
    elif(train_coach==2 and train_coach<=3):
        price = 30*(300 * 80 /100)
    
    else:
        price = 30 * (400*80/100)
    
    print(price)

elif (train_type=='O'):
    if(train_coach==0):
        price = 100
    elif(train_coach==1):
        price= 200
    elif(train_coach==2):
        price = 300
    elif(train_coach==3):
        price = 400
    print(price)

else:
    print("Choose Right options.. ")