#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(n,vector<int>(m,0));
        // 可空间压缩到一个方向
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                dp[i][j] = (i == 0 || j == 0) ? 1 : (dp[i-1][j] + dp[i][j-1]);
            }
        }
        return dp[n-1][m-1];
    }
};