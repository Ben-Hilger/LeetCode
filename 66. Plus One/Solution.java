
/**
  You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.
  Increment the large integer by one and return the resulting array of digits.
 */

public class Solution {
    public int[] plusOne(int[] digits) {
        int carry = 1;
        for (int i = digits.length - 1; i >= 0; i--) {
            int currentDigit = digits[i] + carry;
            digits[i] = currentDigit;
            if (currentDigit == 10) {
                digits[i] = 0;
                carry = 1;
            } else {
                carry = 0;
            }
        }

        // Check if there's carry over at the end
        if (carry == 1) {
            int[] newDigits = new int[digits.length + 1];
            newDigits[0] = carry;
            for(int i = 0; i < digits.length; i++) {
                newDigits[i + 1] = digits[i];
            }
            digits = newDigits;
         }
        
        return digits;
    }
}
