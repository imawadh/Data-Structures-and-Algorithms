class Entry:
    def __init__(self, key , value):
        self.key = key
        self.value = value
        self.hash = hash(key)

class HT:
    def __init__(self):
        self.size = 0
        self.capacity = 5
        self.data = [[] for i in range(self.capacity)]

    def getSize(self):
        return self.size

    def insert(key,value):
        entry = Entry(key,value)
        index = entry.hash % self.capacity
         
        isUpdated =  False
        
        
    def remove(key):
        pass
    def get(key):
        pass