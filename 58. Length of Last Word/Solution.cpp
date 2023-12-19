class Solution {
public:
    int lengthOfLastWord(string s) {
        int size = s.size();
        int lastWordSize = 0;
        for (int i = size - 1; i >= 0; i--) {
            if (isspace(s[i]) && lastWordSize > 0) {
                break;
            }
            if (!isspace(s[i])) {
                lastWordSize++;
            }
        }
        return lastWordSize;
    }
};