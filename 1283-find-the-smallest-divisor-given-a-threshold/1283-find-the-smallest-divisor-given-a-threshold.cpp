class Solution {
public:
    int sumbyd(vector<int>& nums,int number){
        int n = nums.size();
        int sum = 0;
        for(int i=0;i<n;i++){
            sum += ceil((double)nums[i]/(double) number);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low =1;
        int high = *max_element(nums.begin(),nums.end());
        while(high >= low){
            int mid = (low + high)/2;
            int h = sumbyd(nums,mid);
            if(h <= threshold){
                high = mid -1;
            }else{
                low = mid +1;
            }
        }
        return low;
    }
};