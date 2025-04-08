class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // set the matrix as zero 
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> rown(n,0);
        vector<int> coln(m,0);
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j] == 0){
                    rown[i] = 1;
                    coln[j] = 1;
                }
            }
        }
          for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (rown[i] == 1 || coln[j] ==1) {
                matrix[i][j] = 0;
            }
        }
    }
    

    }
};