#include <iostream>
using namespace std;
int main() {
    int t, n, m, tp;
    cin >> t;
    while(t--){
        cin >> n >> m;
        if(m > n) tp = m, m = n, n = tp;
        if(m == 1 && n >= 3) cout << -1;
        else  cout << 2*n  - (((n+m) % 2 == 0)? 2 : 3);
        cout << endl;
    }
    return 0;
}