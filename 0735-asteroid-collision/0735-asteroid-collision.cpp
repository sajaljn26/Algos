class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        // solving the aestroids 
        stack<int> st;
        int n = asteroids.size();
        for(int ast : asteroids){
            bool destroyed = false;
            while(!st.empty() && ast < 0 && st.top() > 0 ){
                
                if(abs(st.top()) < abs(ast) ){
                    st.pop();
                    continue;
                }else if(abs(st.top()) == abs(ast)){
                    st.pop();
                }
                    destroyed = true;
                    break;
                
            }
            if(!destroyed){
                st.push(ast);
            }
        }
        vector<int> ans(st.size());
        for(int i=st.size()-1;i>=0;i--){
            ans[i] = st.top();
            st.pop();
        } 
        return ans;
        
    }
};