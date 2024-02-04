function search(nums: number[], target: number): number {
  let left = 0;
  let right = nums.length;

  // 0 1 2 3 4 5 6
  do {
      let mid = Math.floor((left + right) / 2);

      const value = nums[mid];
      if (value === target) {
          return mid;
      } else if (target < value) {
          right = mid;
      } else if (target > value) {
          left = mid + 1;
      }
  } while (left < right);

  return -1;
};