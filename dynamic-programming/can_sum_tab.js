function canSumTab(target, nums) {
  let tab = Array(target + 1).fill(false);

  tab[0] = true;

  for (let i = 0; i <= target; i++) {
    if (tab[i]) {
      for (const num of nums) {
        let index = i + num;

        if (index <= target) {
          tab[index] = true;
        }
      }
    }
  }

  return tab[target];
}

console.log(canSumTab(300, [15, 7]));
