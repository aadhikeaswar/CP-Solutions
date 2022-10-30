#include <iostream>
typedef long long ll;
using namespace std;
int main() {
    ll t, n, k, s;
    cin >> t;
    while(t--){
        cin >> n >> k;
        if(n < k) s =k;
        else {
            s = (n/k)*k;
            if(n%k!=0) s += k;
        }
        if(s%n==0) cout << s/n << endl;
        else cout << (s/n) + 1 << endl;
    }
    return 0;
}