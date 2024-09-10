class employee:
    holiday = 'Monday'
    def __init__ (self,id,debt,slaary):
        self.id = id
        self.debt =debt
        self.slaary = slaary
    

    @classmethod
    def get_holiday(cls):
        return cls.holiday
    
print(employee.get_holiday())