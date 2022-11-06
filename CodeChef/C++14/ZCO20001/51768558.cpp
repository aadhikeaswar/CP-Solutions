#include <iostream>
typedef long long ll;
using namespace std;
ll po2(ll x){
    if(x == 0) return 1;
    ll y = po2(x/2);
    if(x%2==0) return y*y;
    else return y*y*2;
}
int main() {
    ll  p, idx, t;
    cin >> t;
    while(t--){
        cin >> p >> idx;
        ll lc{0}, rc{p-1}, cv{0};
        idx++;
        while(lc < p) {
            if(idx > po2(rc)) cv += po2(lc), idx -= po2(rc);
            lc++, rc--;
        }
        cout << cv << endl;
    }
    return 0;
}
