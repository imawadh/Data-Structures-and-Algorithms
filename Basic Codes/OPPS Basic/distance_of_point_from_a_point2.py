import math
class point:
    def __init__(self,x,y,z):
        self.x = x
        self.y = y
        self.z = z
    

    def get_distance(self,p):
        return math.sqrt((self.x-p.x)**2 + (self.y-p.y)**2 + (self.z- p.z)**2)
    

p = point(1,2,3)
point2 = point(0,0,0)
print(point2.get_distance(p))