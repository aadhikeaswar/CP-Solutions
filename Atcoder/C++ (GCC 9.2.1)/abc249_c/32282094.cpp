#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, m, k, mod{998244353};
    cin >> n >> m >> k;
    int dp[n][k + 1], sol{0};
    for(auto &x : dp) for(int &y : x) y = 0;
    for(int i = 1; i <= k; i++) dp[0][i] = (i <= m) ? 1 : 0;
    for(int i = 0; i < n - 1; i++) for(int j = 0; j <= k; j++) for(int l = 1; l <= m && l + j <= k; l++) dp[i + 1][j + l] = (dp[i][j] + dp[i + 1][j+l]) % mod;
    for(int i = 0; i <= k; i++) sol = (sol + dp[n-1][i]) % mod;
    cout << sol << endl;
    return 0;
}
