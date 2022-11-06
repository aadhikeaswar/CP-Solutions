#include <iostream>
using namespace std;
int r, c, d, dp[300][300][301][2], mod{20011}, blocked[300][300];
int paths(int i , int j, int dist, int dir){
    if(i>=r||j>=c) return 0;
    if(i == r-1 && j == c-1) return 1;
    if(dp[i][j][dist][dir]!=-1) return dp[i][j][dist][dir];
    dp[i][j][dist][dir] = 0;
    if(dir==0){
        if(dist<d && blocked[i+1][j]==1) dp[i][j][dist][dir] = (dp[i][j][dist][dir] + paths(i+1, j, dist+1, dir)) % mod;
        if(blocked[i][j+1]==1) dp[i][j][dist][dir] = (dp[i][j][dist][dir] + paths(i, j+1, 1, 1)) % mod;
    }
    else{
        if(dist<d && blocked[i][j+1]==1) dp[i][j][dist][dir] = (dp[i][j][dist][dir] + paths(i, j+1, dist+1, dir)) % mod;
        if(blocked[i+1][j]==1) dp[i][j][dist][dir] = (dp[i][j][dist][dir] + paths(i+1, j, 1, 0)) % mod;
    }
    return dp[i][j][dist][dir];
}
int main() {
    cin >> r >> c >> d;
    for(int i = 0; i < r; i++) for(int j = 0; j < c; j++) cin >> blocked[i][j];
    for(auto & i : dp) for(auto & j : i) for(auto & di : j) for(int & k : di) k = -1;
    cout << paths(0,0,0,0);
    return 0;
}
