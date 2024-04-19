class student():
    def __init__(self,id,name):
        self.id = id # seld.anything_name = id is also true here anything_name is the attribute 
        self.name = name

x = student(1,'Awadh')
print(x.id)
print(x.name)