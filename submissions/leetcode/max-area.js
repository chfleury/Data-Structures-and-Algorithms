/**
 * @param {number[]} height
 * @return {number}
 */
var maxArea = function (height) {
  let i = 0;
  let j = height.length - 1;
  let ans = -1;
  let t = -1;

  while (i < j) {
    t = Math.min(height[i], height[j]) * (j - i);

    if (t > ans) {
      ans = t;
    }

    if (height[i] >= height[j]) {
      j--;
    } else {
      i++;
    }
  }

  return ans;
};
