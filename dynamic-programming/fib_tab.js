function fibTab(n) {
  const arr = Array(n + 1).fill(0);
  arr[1] = 1;

  for (let i = 0; i < n - 1; i++) {
    arr[i + 1] += arr[i];
    arr[i + 2] += arr[i];
  }

  arr[n] += arr[n - 1];
  console.log(arr);

  return arr[n];
}

console.log(fibTab(50));
