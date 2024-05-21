function gridTravelerTab(n, m) {
  const matrix = Array(n + 1)
    .fill()
    .map(() => Array(m + 1).fill(0));

  matrix[1][1] = 1;

  for (let i = 0; i <= n; i++) {
    for (let j = 0; j <= m; j++) {
      if (i + 1 <= n) matrix[i + 1][j] += Number(matrix[i][j]);
      if (j + 1 <= m) matrix[i][j + 1] += Number(matrix[i][j]);
    }
  }

  return matrix[n][m];
}

console.log(gridTravelerTab(18, 18));
