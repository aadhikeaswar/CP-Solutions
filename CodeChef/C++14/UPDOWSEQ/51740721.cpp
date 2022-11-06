#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        vector<int> a(n);
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(2, vector<int>(2, 1)));
        dp[n-1][0][1] = 2, dp[n-1][1][1] = 2;
        for(int &i : a) cin >> i;
        for(int i = n-2; i >= 0; i--) for(int j = 0; j < 2; j++) for(int k = 0; k < 2; k++){
            if(j==0){
                if(a[i] >= a[i+1]) dp[i][j][k] = max(dp[i+1][1][0] + 1, dp[i][j][k]);
                if(k == 1){
                    if(a[i] >= a[i+1]) dp[i][j][k] = max(dp[i+1][1][1] + 1, dp[i][j][k]);
                    if(a[i] > a[i+1] || a[i] < a[i+1]) dp[i][j][k] = max(dp[i+1][0][0] + 2, dp[i][j][k]);
                }
            }
            else{
                if(a[i] <= a[i+1]) dp[i][j][k] = max(dp[i+1][0][0] + 1, dp[i][j][k]);
                if(k == 1){
                    if(a[i] <= a[i+1]) dp[i][j][k] = max(dp[i+1][0][1] + 1, dp[i][j][k]);
                    if(a[i] > a[i+1] || a[i] < a[i+1]) dp[i][j][k] = max(dp[i+1][1][0] + 2, dp[i][j][k]);
                }
            }
        }
        int sol = dp[0][1][1];
        for(int i = 1; i < n; i++) sol = max(dp[i][1][1], sol);
        cout << sol << endl;
    }
    return 0;
}
