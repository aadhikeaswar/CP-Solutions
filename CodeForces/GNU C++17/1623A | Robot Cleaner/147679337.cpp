#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n, m, rb, cb, rd, cd, dr{1}, dc{1}, sol{0};
        cin >> n >> m >> rb >> cb >> rd >> cd;
        while(rb != rd && cb != cd) sol++, dc *= ((cb == m && dc == 1) || (cb == 1 && dc == -1))? -1 : 1, dr *= ((rb == n && dr == 1) || (rb == 1 && dr == -1))? -1 : 1, rb += dr, cb += dc;
        cout << sol << endl;
    }
    return 0;
}