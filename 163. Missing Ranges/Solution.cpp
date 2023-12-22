/**
 * You are given an inclusive range [lower, upper] and a sorted unique integer array nums, where all elements are within the inclusive range.
 * A number x is considered missing if x is in the range [lower, upper] and x is not in nums.
 * Return the shortest sorted list of ranges that exactly covers all the missing numbers. That is, no element of nums is included in any of the ranges, and each missing number is covered by one of the ranges.
*/
class Solution {
public:
    vector<vector<int>> findMissingRanges(vector<int>& nums, int lower, int upper) {
        vector<vector<int>> missingRanges;
        if (nums.size() == 0) {
            missingRanges.push_back(this->getMissingRange(lower, upper + 1));
        }

        int lowerNum = lower;
        for (size_t i = 0; i < nums.size(); i++) {
            const int currentNum = nums.at(i);
            if (currentNum != lowerNum) {
                missingRanges.push_back(this->getMissingRange(lowerNum, currentNum));
            }
            lowerNum = currentNum + 1;
        }

        if (nums.size() > 0) {
            int lastNumber = nums.at(nums.size() - 1);
            if (lastNumber != upper) {
                missingRanges.push_back(this->getMissingRange(lastNumber + 1, upper + 1));
            }
        }

        return missingRanges;
    }

private:
    vector<int> getMissingRange(int lower, int upper) {
        std::vector<int> missingRange;
        int difference = upper - lower - 1;
        missingRange.push_back(lower);
        missingRange.push_back(lower + difference);
        return missingRange;
    }
};