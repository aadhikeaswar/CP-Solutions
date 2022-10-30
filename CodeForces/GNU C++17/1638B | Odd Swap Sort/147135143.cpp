#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int arr[n], mo{0}, me{0};
        for(int &i : arr) cin >> i;
        bool pos{true};
        for(int i : arr) {
            if(i % 2 == 0) pos = (i >= me), me = i;
            else pos = (i >= mo), mo = i;
            if(!pos) break;
        }
        cout << (pos? "Yes" : "No") << endl;
    }
    return 0;
}