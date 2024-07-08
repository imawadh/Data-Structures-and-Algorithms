class Node:
    def __init__(self, data , left, right, parent):
        self.data = data
        self.left = left
        self.right = right
        self.parent = parent 


# Pre Order Traversal ----- Node , Left , right
def printPreTree(node):
        if(node is None): 
            return 
        print(node.data)
        printPreTree(node.left)
        printPreTree(node.right)

# Inorder Traversal --- left, node, right
def printInTree(node):
    if(node is None):
        return
    printInTree(node.left)
    print(node.data)
    printInTree(node.right)

# Post Order Traversal --- left, right, node 

def printPostTree(node):
    if(node is None):
        return
    printPostTree(node.left)
    printPostTree(node.Right)
    print(node.data) 



root = Node(1,None,None,None)

node1 = Node(2,None,None,root)
root.left = node1

node3 = Node(16,None,None,node1)
node1.right = node3

node2 = Node(25,None,None,node1)
node1.left = node2

node4 = Node(4,None,None,root)
root.right = node4



print(node3.data)
print(root.left.right.data)

print(node4.right)
print(node1.right.data)



# Pre Order Traversal
print("Pre Order Traversal ")
printPreTree(root)

# In order Traversal
print("In Order Traversal ")
printInTree(root)

# Post Order Traversal
print("Post Order Traversal ")
printPostTree(root)



# a = Node(2,None,None,None)
# print(a.data,a.left,a.right,a.parent)

        
