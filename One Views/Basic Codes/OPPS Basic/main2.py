class student:
    exam_name = ['12th Board']
    def __init__ (self,id):
        self.id = id
        self.college = 'AB'
    

ram = student(1)
shyam = student(2)

ram.exam_name.append('JEE')
print(ram.exam_name)
shyam.exam_name.append("NEET")



print(ram.id)
print(shyam.id)




print(ram.college)




shyam.college="RAM"
print(shyam.college)

print(ram.exam_name)

