# 1. Implement a Hashmap with following supported operation : (3 Marks)
#     1. find(key) : returns true if key is present else false
#     2. insert(key, value) : insert a new {key, value} pair
#     3. remove(key) : remove an existing key
#     4. Implement both open addressing (Linear and/or Quadratic probing) and separate chaining techniques for collision handling



# Open Addressing with Linear Probing

class LinearProbingHashMap:
    def __init__(self, capacity=8):
        self.capacity = capacity
        self.size = 0
        self.keys = [None] * capacity
        self.values = [None] * capacity

    def _hash(self, key):
        return hash(key) % self.capacity

    def _resize(self):
        old_keys = self.keys
        old_values = self.values
        self.capacity *= 2
        self.keys = [None] * self.capacity
        self.values = [None] * self.capacity
        self.size = 0
        for key, value in zip(old_keys, old_values):
            if key is not None:
                self.insert(key, value)

    def insert(self, key, value):
        if self.size / self.capacity >= 0.7:
            self._resize()
        index = self._hash(key)
        while self.keys[index] is not None:
            if self.keys[index] == key:
                self.values[index] = value
                return
            index = (index + 1) % self.capacity
        self.keys[index] = key
        self.values[index] = value
        self.size += 1

    def find(self, key):
        index = self._hash(key)
        while self.keys[index] is not None:
            if self.keys[index] == key:
                return True
            index = (index + 1) % self.capacity
        return False

    def remove(self, key):
        index = self._hash(key)
        while self.keys[index] is not None:
            if self.keys[index] == key:
                self.keys[index] = None
                self.values[index] = None
                self.size -= 1
                self._rehash(index)
                return
            index = (index + 1) % self.capacity

    def _rehash(self, start_index):
        index = (start_index + 1) % self.capacity
        while self.keys[index] is not None:
            key_to_rehash = self.keys[index]
            value_to_rehash = self.values[index]
            self.keys[index] = None
            self.values[index] = None
            self.size -= 1
            self.insert(key_to_rehash, value_to_rehash)
            index = (index + 1) % self.capacity

# Separate Chaining

class Node:
    def __init__(self, key, value):
        self.key = key
        self.value = value
        self.next = None

class SeparateChainingHashMap:
    def __init__(self, capacity=8):
        self.capacity = capacity
        self.buckets = [None] * capacity

    def _hash(self, key):
        return hash(key) % self.capacity

    def insert(self, key, value):
        index = self._hash(key)
        head = self.buckets[index]
        while head is not None:
            if head.key == key:
                head.value = value
                return
            head = head.next
        new_node = Node(key, value)
        new_node.next = self.buckets[index]
        self.buckets[index] = new_node

    def find(self, key):
        index = self._hash(key)
        head = self.buckets[index]
        while head is not None:
            if head.key == key:
                return True
            head = head.next
        return False

    def remove(self, key):
        index = self._hash(key)
        head = self.buckets[index]
        prev = None
        while head is not None:
            if head.key == key:
                if prev is not None:
                    prev.next = head.next
                else:
                    self.buckets[index] = head.next
                return
            prev = head
            head = head.next


lp_hash_map = LinearProbingHashMap()
lp_hash_map.insert("key1", "value1")
lp_hash_map.insert("key2", "value2")
print(lp_hash_map.find("key1")) 
print(lp_hash_map.find("key3")) 
lp_hash_map.remove("key1")
print(lp_hash_map.find("key1"))  

sc_hash_map = SeparateChainingHashMap()
sc_hash_map.insert("key1", "value1")
sc_hash_map.insert("key2", "value2")
print(sc_hash_map.find("key1"))  
print(sc_hash_map.find("key3"))  
sc_hash_map.remove("key1")
print(sc_hash_map.find("key1"))  
