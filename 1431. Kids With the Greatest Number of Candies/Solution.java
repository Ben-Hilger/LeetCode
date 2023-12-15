import java.util.ArrayList;
import java.util.List;

/**
  There are n kids with candies. You are given an integer array candies, where each candies[i] represents the number of candies the ith kid has, and an integer extraCandies, denoting the number of extra candies that you have.
  Return a boolean array result of length n, where result[i] is true if, after giving the ith kid all the extraCandies, they will have the greatest number of candies among all the kids, or false otherwise.
  Note that multiple kids can have the greatest number of candies.
 */

public class Solution {
    
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {

        List<Boolean> kidsWithCandiesExtra = new ArrayList<Boolean>(candies.length);

        int currentMax = currentMax(candies);
        for(int i = 0; i < candies.length; i++) {
            int totalWithExtra = candies[i] + extraCandies;
            kidsWithCandiesExtra.add(currentMax <= totalWithExtra);
        }

        return kidsWithCandiesExtra;
    }

    private int currentMax(int[] arr) {
        int max = arr[0];
        for (int i = 0; i < arr.length; i++) {
            max = Math.max(arr[i], max);
        }
        return max;
    }
}