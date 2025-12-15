class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        int fre[26] = {0};
        for(char c : s){
            fre[c - 'a']++;
        }
        for(char n : t){
            fre[n - 'a']--;
        }

        for(int i=0;i<26;i++){
            if(fre[i] != 0){
                return false;
            }
        }
        return true;

    }
};