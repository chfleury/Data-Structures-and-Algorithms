function howSumTab(target, nums) {
  const tab = Array(target + 1).fill(null);

  tab[0] = [];

  for (let i = 0; i <= target; i++) {
    if (tab[i]) {
      for (let num of nums) {
        const idx = num + i;

        if (idx <= target) {
          tab[idx] = [...tab[i], num];
        }
      }
    }
  }

  return tab[target];
}

console.log(howSumTab(10, [34, 17]));
