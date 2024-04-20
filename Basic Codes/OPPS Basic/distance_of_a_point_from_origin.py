import math
class point:
    def __init__(self,x,y,z):
        self.x = x
        self.y = y
        self.z = z

    def get_distance_from_origin(self):
        return math.sqrt( self.x * self.x + self.y * self.y + self.z *self.z)
    
value = point(1,1,1)
print(value.get_distance_from_origin())