class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int top=0,bottom = matrix.size()-1,left=0,right=matrix[0].size()-1;
        vector<int> arr;
         while (top <= bottom && left <= right) {
            for (int i = left; i <= right; i++) {
                arr.push_back(matrix[top][i]);
            }
            top++;
            for (int i = top; i <= bottom; i++) {
                arr.push_back(matrix[i][right]);
            }
            right--;
            if (top <= bottom) {
                for (int i = right; i >= left; i--) {
                    arr.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    arr.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return arr;
    }
};
