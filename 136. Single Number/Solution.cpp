class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int answer = nums.at(0);

        for(int i = 1; i < nums.size(); i++) {
            answer = answer ^ nums[i];
        }

        return answer;
    }
};