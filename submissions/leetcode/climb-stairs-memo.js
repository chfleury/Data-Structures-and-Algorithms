function climbStairs(n) {
  return ans(n);
}

function ans(n, memo = {}) {
  if (n == 1) {
    return 1;
  }

  if (n == 0) {
    return 1;
  }

  if (n in memo) {
    return memo[n];
  }

  const a1 = ans(n - 1, memo);
  const a2 = ans(n - 2, memo);

  memo[n - 1] = a1;
  memo[n - 2] = a2;

  return a1 + a2;
}
