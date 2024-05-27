/**
 * @param {number[]} numbers
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function (numbers, target) {
  let i = 0;
  let j = numbers.length - 1;
  let sum = 0;
  while (i < j) {
    sum = numbers[i] + numbers[j];
    if (sum > target) {
      j--;
    } else if (sum < target) {
      i++;
    } else {
      return [++i, ++j];
    }
  }
};
