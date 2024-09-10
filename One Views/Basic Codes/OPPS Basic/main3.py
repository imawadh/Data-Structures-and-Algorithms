class employee:
    def __init__(self,id,debt,salary):
        self.id = id
        self.debt = debt
        self.salary = salary
    
    def get_tax(self):
        return 0.3 * self.salary

emp1 = employee(1,'AB',10)
emp2 = employee(1,'CD',20)

print(emp1.get_tax())
print(emp2.get_tax())