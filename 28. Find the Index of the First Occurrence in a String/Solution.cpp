class Solution {
public:
    int strStr(string haystack, string needle) {
        for (size_t i = 0; i + needle.length() <= haystack.length(); i++) {
            string s = haystack.substr(i, needle.length());
            if (s == needle) {
                return i;
            }
        }
        return -1;
    }
};