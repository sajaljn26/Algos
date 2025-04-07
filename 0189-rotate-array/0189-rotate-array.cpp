class Solution {
public:
    void rotate(vector<int>& nums, int k) {
      int n = nums.size();
        k=k%n;
        // in order to rotate the array we can use the reversal technique that we have found
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin() + k);
        reverse(nums.begin()+k,nums.end());  
    }
};