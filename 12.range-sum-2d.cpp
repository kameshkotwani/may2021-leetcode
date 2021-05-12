class NumMatrix {
public:
 vector<vector<int>> dp;
    NumMatrix(vector<vector<int>>& matrix) {
      int rows = matrix.size();
      int cols = matrix[0].size();
      if(rows==0 || cols==0) return;
       
      dp = vector < vector <int>>(rows, vector <int> (cols+1));
      for(int r=0;r<rows;r++)
        for(int j=0;j<cols;j++)
          dp[r][j+1] = dp[r][j]+matrix[r][j];
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum=0;
        for(int row = row1;row<=row2;row++)
          sum+=dp[row][col2+1]-dp[row][col1];
      return sum;
    }
};
