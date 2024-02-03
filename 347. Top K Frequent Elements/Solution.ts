function topKFrequent(nums: number[], k: number): number[] {
  const map = new Map<number, number>();
  for (let num of nums) {
      let currentAmount = map.get(num) ?? 0;
      currentAmount++;
      map.set(num, currentAmount);
  }

  let items: {number: number, frequency: number}[] = []
  map.forEach((value, key) => {
      items.push({
          number: key,
          frequency: value,
      })
  })

  items.sort((a, b) => b.frequency - a.frequency);

  let results: number[] = []

  for (let i = 0; i < k; i++) {
      results.push(items[i].number);
  }

  return results;
};