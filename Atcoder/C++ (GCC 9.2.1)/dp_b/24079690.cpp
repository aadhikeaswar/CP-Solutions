#pragma GCC optimize("O3")
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n], b[n], c[n], dp[n+1][3];
    for(int i = 0; i < n; i++) cin >> a[i] >> b[i] >> c[i];
    for(int i = n; i >= 0; i--) for(int j = 0; j < 3; j++){
        if(i == n) dp[i][j] = 0;
        else if(j == 0) dp[i][j] = max(dp[i+1][1] + b[i], dp[i+1][2] + c[i]);
        else if(j == 1) dp[i][j] = max(dp[i+1][0] + a[i], dp[i+1][2] + c[i]);
        else if(j == 2) dp[i][j] = max(dp[i+1][0] + a[i], dp[i+1][1] + b[i]);
    }
    cout << max(dp[0][0], max(dp[0][1], dp[0][2]));
    return 0;
}
