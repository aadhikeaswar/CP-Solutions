#pragma GCC optimize("O3")
#include <iostream>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    int a[n], dp[n+1];
    for(int &i : dp) i = INT32_MAX;
    dp[n] = 0, dp[n-1] = 0;
    for(int &i : a) cin >> i;
    for(int i = n-1; i >= 0; i--) for(int j = 1; j <= k && j + i <= n; j++) dp[i] = min(abs(a[i] - a[i+j]) + dp[i+j], dp[i]);
    cout << dp[0];
    return 0;
}
