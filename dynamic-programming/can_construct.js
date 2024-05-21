function canConstruct(target, wordBank, memo = {}) {
  if (target in memo) {
    return memo[target];
  }

  if (target === "") {
    return true;
  }

  for (const w of wordBank) {
    if (target.indexOf(w) === 0) {
      if (canConstruct(target.substring(w.length), wordBank, memo)) {
        memo[target];
        return true;
      }
    }
  }

  memo[target] = false;
  return false;
}

console.log(canConstruct("abcdef", ["ab", "cde", "a", "bcde", "f"]));
