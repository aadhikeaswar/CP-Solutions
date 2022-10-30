#include <iostream>
using namespace std;
bool vis[1001][1001], rem[1001];
void solve(int k, int i){
    if(vis[k][i]) return;
    else vis[k][i] = true;
    if(k==0) {
        rem[i+1] = true;
        return;
    }
    if(k>=i && i > 0) solve(k-i, i-1);
    if(i>1) solve(k, i-1);
}
int main() {
    int t;
    cin >> t;
    while(t--){
        int n, k, sol{0};
        cin >> n >> k;
        for(auto &i : vis) for(bool &j : i) j = false;
        for(bool &i : rem) i = false;
        solve(k,k);
        for(int i = 1; i <= n; i++) if(!rem[i]) sol++;
        cout << sol <<  endl;
        for(int i = 1; i <= n; i++) if(!rem[i])  cout << i << " ";
        cout << endl;
    }
    return 0;
}