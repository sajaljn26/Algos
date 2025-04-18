class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // majority elemnt 
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(auto x : mpp){
            if(x.second > (nums.size()/2)){
                return x.first;
            }
        }
        return 0;
    }
};