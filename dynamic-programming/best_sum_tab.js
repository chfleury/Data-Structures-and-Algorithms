function bestSumTab(target, nums) {
  const tab = Array(target + 1).fill(null);

  tab[0] = [];

  for (let i = 0; i <= target; i++) {
    if (tab[i]) {
      for (const n of nums) {
        const idx = n + i;

        if (idx <= target) {
          if (!tab[idx] || tab[idx].length > tab[i].length + 1) {
            tab[idx] = [...tab[i], n];
          }
        }
      }
    }
  }

  console.log(tab);
  return tab[target];
}

console.log(
  bestSumTab(
    50,
    [47, 46, 4, 1].sort((a, b) => b - a)
  )
);
