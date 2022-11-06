#include <iostream>
#include <cstring>

using namespace std;
int main() {

    int n, m, k, t;
    cin >> t;
    while(t--){
        cin >> n >> m >> k;
        int a[n+1][m+1], dp1[n+1][m+1][k+1], dp2[n+1][m+1][k+1], pref[n+1][m+1], sol{INT32_MIN};
        memset(dp1, 0, sizeof dp1), memset(dp2, 0, sizeof dp2), memset(pref, 0, sizeof pref);
        for(int i = 1; i <= n; i++) for(int j = 1; j <= m; j++) cin >> a[i][j];
        for(int i = 1; i <= n; i++) for(int j = 1; j <= m; j++) pref[i][j] = pref[i][j-1] + a[i][j];
        for(int i = 1; i <= n; i++) for(int j = 1; j <= m; j++) for(int c = 0; c <= k; c++) dp1[i][j][c] = ((c)? min(dp1[i-1][j][c], dp1[i-1][j-1][c-1]) : dp1[i-1][j][c]) + pref[i][j-1];
        for(int i = 1; i <= n; i++) for(int j = 1; j <= m; j++) for(int c = 0; c <= k; c++) dp2[i][j][c] = ((c)? max(dp2[i-1][j][c], dp2[i-1][j-1][c-1]) : dp2[i-1][j][c]) + pref[i][j];
        for(int i = 1; i <= m; i++) for(int j = i + k + 1; j <= m; j++) sol = max(sol, dp2[n][j][k] - dp1[n][i][k]);
        cout << sol << endl;
    }
    return 0;
}