class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // searching in a 2d matrix
        int n = matrix.size();
        int m = matrix[0].size();
        int low = 0;
        int high = n*m-1;
        while(high >= low){
            int mid = (low + high)/2;
            int row = mid / n;
            int col = mid % m;
            if(target == matrix[row][col]){
                return true;
            }else if(matrix[row][col] < target){
                low = mid +1;
            }else{
                high = mid -1;
            }
        }
        return false;
    }
};