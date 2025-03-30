class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()){
            return false;
        }
        string concanated = s + s;
        return concanated.find(goal) != string::npos;
    }
};