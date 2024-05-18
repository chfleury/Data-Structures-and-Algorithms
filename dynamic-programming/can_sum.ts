function canSum(
  target: number,
  nums: Array<number>,
  memo: Record<number, boolean> = {}
): boolean {
  if (target in memo) {
    return memo[target];
  }

  if (target === 0) {
    return true;
  }

  if (target < 0) {
    return false;
  }

  for (const n of nums) {
    if (canSum(target - n, nums, memo)) {
      memo[target] = true;

      return true;
    }
  }

  memo[target] = false;
  return false;
}

console.log(canSum(300, [14, 7]));
