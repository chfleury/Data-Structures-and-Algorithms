function bestSum(target, nums, memo = {}) {
  if (target in memo) {
    return memo[target];
  }

  if (target === 0) {
    return [];
  }

  if (target < 0) {
    return -1;
  }

  let ans = -1;

  for (const n of nums) {
    const result = bestSum(target - n, nums, memo);

    if (result !== -1) {
      if (ans === -1 || result.length < ans.length) {
        ans = [n, ...result];
      }
    }
  }

  memo[target] = ans;

  return ans;
}

console.log(
  bestSum(
    50,
    [47, 46, 4, 1].sort((a, b) => b - a)
  )
);
