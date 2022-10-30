#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int c = n - (n%7);
        cout << ((c/10) == (n/10) ? c : c + 7) << endl;
    }
    return 0;
}