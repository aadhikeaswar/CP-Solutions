#include <iostream>
using namespace std;
int main() {
    int t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        if(k > (n-1)/2) {
            cout << -1 << endl;
            continue;
        }
        int a[n], cnt{0};
        for(int i = 0; i <= k; i++) a[2*i] = ++cnt;
        for(int i = 1; i <= k; i++) a[(2*i)-1] = ++ cnt;
        for(int i = (2*k)+1; i < n; i++) a[i] = ++cnt;
        for(int &i : a) cout << i << " ";
        cout << endl;
    }
    return 0;
}