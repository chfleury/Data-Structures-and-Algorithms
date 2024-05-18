class Node:
    def __init__(self, value) -> None:
        self.left: Node = None
        self.right: Node = None 
        self.value: str = value
    


def maxRootToLeaftPath(root: Node):
    if(root is None): return 0
    return root.value + max(maxRootToLeaftPath(root.left), maxRootToLeaftPath(root.right))


root = Node(4)

b = Node(1)   
c = Node(3)
d = Node(10)
e = Node(40)

root.left = b
root.right = e

b.left = c
b.right = d

print(maxRootToLeaftPath(root))



#         4
#       /   \
#      1    40
#     / \
#    3   7