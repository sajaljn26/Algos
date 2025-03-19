class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int right = 0;
        int maxlen = 0;
        int n = s.size();
        unordered_set<char> charset;
        for(int right =0;right<n;right++){
            while(charset.find(s[right]) != charset.end()){
                    charset.erase(s[left]);
                    left++;
            }
            charset.insert(s[right]);
            maxlen = max(maxlen,right-left+1);
        }
        return maxlen;

    }
};