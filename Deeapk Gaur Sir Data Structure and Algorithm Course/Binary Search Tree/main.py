class Node:
    def __init__ (self,data=None,left= None,right= None ):
        self.data = data
        self.left = left
        self.right = right
       

class binary_search_tree:
    def __init__ (self):
        self.root = None
        self.size = 0

    def insert2(self,root,data):
        if(root==None):
            return Node(data)
        if(data==root.data):
            return root
        if(data<root.data):
            root.left = self.insert2(root.left,data)
            return root
        if(data>root.data):
            root.right = self.insert2(root.right, data)

    def insert(self,data):
        self.root = self.insert2(self.root,data)


# root_node = Node(13)
# print(root_node.data)
# print(root_node.left)
# print(root_node.right)
# root_node.insert2(5)
# print(root_node.left)


root = binary_search_tree()
root.insert(5)
root.insert(56)
root.insert(66)
root.insert(3)
print(root.data)






    