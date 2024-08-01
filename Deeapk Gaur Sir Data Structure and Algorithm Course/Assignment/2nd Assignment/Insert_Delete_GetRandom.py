class RandomizedSet:
    def __init__(self):
        self.value_to_index = {}
        self.values = []
        self.seed = 1  

    def insert(self, val: int) -> bool:
        if val in self.value_to_index:
            return False
        self.value_to_index[val] = len(self.values)
        self.values.append(val)
        return True

    def remove(self, val: int) -> bool:
        if val not in self.value_to_index:
            return False
        
        index = self.value_to_index[val]
        
        last_val = self.values[-1]
        self.values[index] = last_val
        self.value_to_index[last_val] = index
        self.values.pop()
        del self.value_to_index[val]
        return True

    def getRandom(self) -> int:
        index = self.random_index()
        return self.values[index]

    


