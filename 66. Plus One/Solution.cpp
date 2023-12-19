class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i = digits.size() - 1; i >= 0; i--) {
            int currentDigit = digits.at(i) + 1;
            digits.at(i) = currentDigit == 10 ? 0 : currentDigit;
            if (currentDigit != 10) {
                return digits;
            }
        }

        if (digits.size() >= 1 && digits.at(0) == 0) {
            digits.insert(digits.begin(), 1);
        }

        return digits;
    }
};