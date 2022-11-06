#include <iostream>
using namespace std;
int dp[1000001];
int g[999999];
int main() {
    int n;
    cin >> n;
    dp[1] = 1, dp[2] = 2, dp[3] = 5, g[1] = 1;
    if(n<=3) cout << dp[n];
    else {
        for(int i = 4; i <= n; i++)g[i-2] = (g[i-3] + dp[i-3]) % 10000, dp[i] = (dp[i-1] + dp[i-2] + 2*g[i-2])%10000;
        cout << dp[n];
    }
    return 0;
}
