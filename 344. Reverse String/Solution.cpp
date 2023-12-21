// Write a function that reverses a string. The input string is given as an array of characters s.
// You must do this by modifying the input array in-place with O(1) extra memory.

#include <vector>

class Solution {
public:
    void reverseString(vector<char>& s) {
        int startingIndex = s.size() - 1;
        for (size_t i = startingIndex; i > startingIndex / 2; i--) {
            int beginningIndex = startingIndex - i;
            swap(s.at(beginningIndex), s.at(i));
        }
    }
};