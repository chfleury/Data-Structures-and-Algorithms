/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number[]}
 */
var rightSideView = function (root) {
  if (!root) {
    return [];
  }

  const stack = [[root, 0]];
  let maxHeigth = 0;
  const ans = [root.val];

  while (stack.length) {
    const [currNode, currHeigth] = stack.pop();

    if (currNode.left) stack.push([currNode.left, currHeigth + 1]);

    if (currNode.right) stack.push([currNode.right, currHeigth + 1]);

    if (currHeigth > maxHeigth) {
      ans.push(currNode.val);
    }

    maxHeigth = Math.max(maxHeigth, currHeigth);
  }

  return ans;
};
