#pragma GCC optimize("O3")
#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
int main() {
    int n, w;
    cin >> n >> w;
    vector<ll>dp(w+1, 0), v(n), wi(n);
    for(int i = 0; i < n; i++) cin >> wi[i] >> v[i];
    for(int j = 0; j < n; j++) for(int i = w; i - wi[j] >= 0; i--) dp[i] = max(dp[i-wi[j]] + v[j],  dp[i]);
    cout << dp[w];
    return 0;
}
