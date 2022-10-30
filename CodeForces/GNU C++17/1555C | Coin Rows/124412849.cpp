#include <iostream>
using namespace std;
int main() {
    int t, m;
    cin >> t;
    while(t--){
        cin >> m;
        int a[m], b[m], pa[m+1], sb[m+1], sol{INT32_MAX};
        for(int &i : a) cin >> i;
        for(int &i : b) cin >> i;
        sb[0] = 0, pa[m] = 0;
        for(int i = 1; i <= m; i++) sb[i] = sb[i-1] + b[i-1];
        for(int i = m-1; i >= 0; i--) pa[i] = pa[i+1] + a[i];
        for(int i = 0; i < m; i++) sol = min(sol, max(sb[i], pa[i+1]));
        cout << sol << endl;
    }
    return 0;
}