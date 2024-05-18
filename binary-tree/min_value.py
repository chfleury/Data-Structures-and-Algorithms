class Node:
    def __init__(self, value) -> None:
        self.left: Node = None
        self.right: Node = None 
        self.value: str = value
    


def minValue(root: Node):
  if root is None: return float('-inf')
  if(not root.left and not root.right): return root.value

  return root.value + max(minValue(root.left), minValue(root.right))

root = Node(43244)

b = Node(13)   
c = Node(333)
d = Node(4443)
e = Node(4)

root.left = b
root.right = e

b.left = c
b.right = d

print(minValue(root))


