class Solution {
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