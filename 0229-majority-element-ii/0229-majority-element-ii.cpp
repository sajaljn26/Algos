class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mpp;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(auto x :mpp){
            if(x.second > (nums.size()/3)){
                ans.push_back(x.first);
            }
        }
        return ans;


    }
};