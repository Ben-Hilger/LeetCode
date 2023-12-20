/**
 * Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
 * You must implement a solution with a linear runtime complexity and use only constant extra space.
 */

public class Solution {
    public int singlenumber(int[] nums) {
        set<integer> possible = new hashset<>();
        set<integer> numbercounts = new hashset<>();
        for (int i = 0; i < nums.length; i++) {
            if (numbercounts.contains(nums[i])) {
                possible.remove(nums[i]);
            } else {
                possible.add(nums[i]);
            }
            numbercounts.add(nums[i]);
        }
        return possible.iterator().next();
    }
}

public class Solution {
    public int singleNumber(int[] nums) {
        int number = nums[0];
        for (int i = 1; i < nums.length; i++) {
            number = number ^ nums[i];
        }
        return number;
    }
}