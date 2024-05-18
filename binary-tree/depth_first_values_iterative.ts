class TreeNode {
  public left: TreeNode | undefined;
  public right: TreeNode | undefined;
  constructor(public value: string) {}
}

function depthFirstValues(root: TreeNode): Array<string> {
  const values: string[] = [];

  const stack: TreeNode[] = [root];

  while (stack.length) {
    const node = stack.pop()!;

    values.push(node.value);

    if (node.right) stack.push(node.right);
    if (node.left) stack.push(node.left);
  }

  return values;
}

const root = new TreeNode("a");

const b = new TreeNode("b");
const c = new TreeNode("c");
const d = new TreeNode("d");
const e = new TreeNode("e");

root.left = b;
root.right = e;

b.left = c;
b.right = d;

console.log(depthFirstValues(root));
