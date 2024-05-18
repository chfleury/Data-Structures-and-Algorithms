// Return any combination that sums to the target number
// If there isn't any, returns -1

function howSum(target, nums, memo = {}) {
  if (target in memo) {
    return memo[target];
  }

  if (target === 0) {
    return [];
  }

  if (target < 0) {
    return -1;
  }

  for (const n of nums) {
    const result = howSum(target - n, nums, memo);
    memo[target] = result;

    if (result !== -1) {
      return [n, ...result];
    }
  }

  memo[target] = -1;

  return -1;
}

console.log(howSum(7, [2, 4, 3]));
