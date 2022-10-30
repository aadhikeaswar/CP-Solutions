#include <iostream>
typedef long long ll;
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, k;
    cin >> t;
    while (t--){
       cin >> n >> k;
       ll dp[n+1][k+1], mod{1000000007};
       for(int j = 1; j <= k; j++) for(int i = 0; i <= n; i++)
                if(i == 0 || j == 1) dp[i][j] = 1;
                else dp[i][j] = (dp[i-1][j] + dp[n-i][j-1]) % mod;
        cout << dp[n][k] << endl;
    }
    return 0;
}