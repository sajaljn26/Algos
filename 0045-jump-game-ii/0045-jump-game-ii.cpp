class Solution {
public:
    int jump(vector<int>& nums) {
        // jump game 
        int far =0;
        int cnt = 0;
        int end =0;
        for(int i=0;i<nums.size()-1;i++){
            far = max(far,i + nums[i]);
            if(i == end){
                cnt++;
                end = far;
            }
        }
        return cnt; 

        
    }
};