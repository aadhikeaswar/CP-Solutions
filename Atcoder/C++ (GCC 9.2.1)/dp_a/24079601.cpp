#pragma GCC optimize("O3")
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n], dp[n+1];
    for(int &i : a) cin >> i;
    dp[n] = 0, dp[n-1] = 0;
    for(int i = n-2; i >= 0; i--) dp[i] = min(abs(a[i] - a[i+1]) + dp[i+1], abs(a[i] - a[i+2]) + dp[i+2]);
    cout << dp[0];
    return 0;
}
