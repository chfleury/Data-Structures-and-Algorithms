class Node:
    def __init__(self, value) -> None:
        self.left: Node = None
        self.right: Node = None 
        self.value: str = value
    


def depthFirstValues(root: Node, value: str):
    if(root is None): return False

    if root.value == value: return True

    return root.value or depthFirstValues(root.left) or depthFirstValues(root.right) 


root = Node('a')

b = Node('b')   
c = Node('c')
d = Node('d')
e = Node('e')

root.left = b
root.right = e

b.left = c
b.right = d

value = 'e'

print(depthFirstValues(root, value))


