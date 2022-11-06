#include <iostream>
#include <algorithm>
int n, m;
bool safe[501][501];
int arr[501][501];
int dp[501][501];
bool pos[501][501];
int bestPath(int i, int j){
    if(safe[i][j]) return dp[i][j];
    int sol;
    bool ipos = false;
    if(i<n && pos[i+1][j]){
        sol = arr[i][j] + bestPath(i+1,j);
        ipos = true;
    }
    if(j<n && pos[i][j+1]){
        if(ipos) {
            if(arr[i][j]+bestPath(i,j+1)>sol) sol = arr[i][j] + bestPath(i, j+1);
        }
        else {
            sol = arr[i][j] +bestPath(i, j+1);
        }
    }
    safe[i][j] = true;
    dp[i][j] = sol;
    return sol;
}
using namespace std;
int main() {
    cin >> n >> m;
    for(int i = 1; i <=n; i++) for(int j = 1; j <= n; j++) cin >> arr[i][j];
    for(int p = 0; p < m; p++) {
        int x, y, k;
        cin >> x >> y >> k;
        for(int i = -k; i <= k; i++){
            int ti = i+x;
            if(ti>n) break;
            if(ti<1) continue;
            for(int j = -k; j <= k; j++){
                int tj = j + y;
                if(tj > n) break;
                if(tj < 1) continue;
                if(abs(i)+abs(j)>k){
                    if(j>=0) break;
                    else continue;
                }
                safe[ti][tj] = true;
            }
        }
    }
    for(int i = n; i >= 1; i--){
        for(int j = n; j >= 1; j--){
            if(safe[i][j]){
                bool temp = false;
                if(i!=n) temp = pos[i+1][j];
                if(!temp&&j!=n) temp = pos[i][j+1];
                pos[i][j] = temp;
                if(i==n&j==n&&safe[i][j]) pos[i][j] = true;
            }
        }
    }
    if(pos[1][1]){
        cout << "YES\n";
        for(int i = 0; i <=n; i++)for(int j = 0; j <= n; j++) safe[i][j] = false;
        safe[n][n] = true;
        dp[n][n] = arr[n][n];
        cout << bestPath(1,1);
    }
    else cout << "NO";

    return 0;
}
