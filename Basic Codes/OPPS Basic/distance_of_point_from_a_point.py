
class Point:

    def __init__(self,x1,y1,z1,x2=0,y2=0,z2=0):
        self.x1 = x1
        self.y1 = y1
        self.z1 = z1
        self.x2 = x2
        self.y2 = y2
        self.z2 = z2

    def get_distance_from_another_point(self):
        return ((self.x1-self.x2)*(self.x1-self.x2)+(self.y1-self.y2)*(self.y1-self.y2)+(self.z1-self.z2)*(self.z1-self.z2))**0.5
    
distance = Point(1,2,3)
print(distance.get_distance_from_another_point())