var merge = function (nums1, m, nums2, n) {
  const ans = Array(n + m);

  let i = 0;
  let j = 0;

  if (n === 0) {
    return;
  }

  if (m === 0) {
    for (let k = 0; k < m + n; k++) {
      nums1[k] = nums2[k];
    }
  }

  while (i < m || j < n) {
    if (i < m && nums1[i] <= nums2[j]) {
      ans[i + j] = nums1[i];
      i += 1;
    } else {
      ans[i + j] = nums2[j];
      j += 1;
    }
  }

  for (let k = 0; k < m + n; k++) {
    nums1[k] = ans[k];
  }

  return nums1;
};

console.log(merge([0, 0], 0, [1, 2], 0));
