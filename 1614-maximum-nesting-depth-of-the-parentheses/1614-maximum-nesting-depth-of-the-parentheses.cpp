class Solution {
public:
    int maxDepth(string s) {
        // solving this problem 
        int maxdepth = 0;
        int balance = 0;
        for(int i=0;i<s.size();i++){
            if(s[i] == '('){
                balance++;
            }
            maxdepth = max(maxdepth,balance);
            if(s[i] == ')'){
                balance--;
            }


        }
        return maxdepth;
    }
};