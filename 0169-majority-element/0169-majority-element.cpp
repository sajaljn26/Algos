class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> sheet;
        int a = nums.size()/2;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int b = nums[i];
            sheet[b]++;
            if(sheet[b] > a){
                return b;
            }
        }
        return -1;
    }
};