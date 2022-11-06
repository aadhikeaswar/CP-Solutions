#include <iostream>
using namespace std;
int n, bi, bj, maxi{0}, len;
char a[5000];
bool dp[5000][5000];
bool vis[5000][5000];
bool f(int i, int j){
    if (i > j) return true;
    if(a[i]==a[j]) {
        if(vis[i][j]) return dp[i][j];
        else vis[i][j] = true;
        dp[i][j] = f(i+1,j-1);
        return dp[i][j];
    }
    else return false;
}
int main() {
    cin >> n;
    for(int i = 0; i < 5000; i++) for(int j = i; j < 5000; j++) dp[i][j] = false, vis[i][j] = false;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) for(int j = i+1; j < n; j++){
        if(f(i,j))len = j-i+1;
        else continue;
        if(maxi<len) maxi = len, bi = i, bj = j;
    }
    cout << maxi << endl;
    for(int i = bi; i <= bj; i++) cout << a[i];
    return 0;
}
