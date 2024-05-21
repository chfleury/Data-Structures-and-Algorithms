function canConstructTab(target, words) {
  const tab = Array(target.length).fill(null);

  tab[0] = target;

  for (let i = 0; i <= target.length; i++) {
    if (tab[i]) {
      for (const word of words) {
        if (tab[i].indexOf(word) === 0) {
          let len = word.length;
          let rest = tab[i].slice(len);
          if (i + len <= target.length) tab[i + len] = rest;
        }
      }
    }
  }

  console.log(tab);
  return tab[target.length] === "" ? true : false;
}

console.log(canConstructTab("abcdef", ["aba", "cdea", "ab", "bcde", "f"]));
