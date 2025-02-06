class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int left=matrix[0].size()-1;
        int below=0;
        while(left>=0 && below <matrix.size()){
            if(matrix[below][left]> target){
                left--;
            }
            else if(matrix[below][left]<target){
                below++;
            }else {
                return true;
            }
        }
        return false;
    }
};