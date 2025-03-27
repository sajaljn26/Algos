class Solution {
public:
    void gen(int i,int j,int n, string curr , vector<string>& result){
            if(curr.size() == 2*n){
                 result.push_back(curr);
                 return;
            }
            if(i<n){
                gen(i+1,j,n,curr+"(",result);
            }
            if(j<i){
                gen(i,j+1,n,curr+")",result);
            }
           
    }
    vector<string> generateParenthesis(int n) {
        // generate parenthesis 
        vector<string> result;
        string curr ="";
        gen(0,0,n,curr,result);
        return result;
    }
};