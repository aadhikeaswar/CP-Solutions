#include <iostream>
using namespace std;
int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio();
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[n], lowest{INT32_MAX};
        for(int &i : a) cin >> i;
        bool drenched[n];
        for(bool &j : drenched) j = false;
        for(int i = n-1; i >= 0; i--) {
            lowest = min(lowest, i - a[i]);
            if (i > lowest) drenched[i] = true;
        }
        for(bool &i : drenched){
            if(i) cout << 1 << " ";
            else cout << 0 << " ";
        }
        cout << endl;
    }
    return 0;
}