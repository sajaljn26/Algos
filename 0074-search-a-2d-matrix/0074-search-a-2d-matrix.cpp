class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // searching in the sorted 2d matrix is the given ques 
        int n = matrix.size();
        int m = matrix[0].size();
        int low = 0;
        int high = m*n-1;
        while(high >= low){
            int mid = (low + high)/2;
            int row = mid/m;
            int col = mid % m;
            if(target == matrix[row][col]){
                return true;
            }else if(matrix[row][col] > target){
                high = mid-1;
            }else{
                low = mid +1;
            }
        }
        return false;
    }
};