#include <iostream>
using namespace std;
typedef long long ll;
int main() {
    ll t, n;
    cin >> t;
    while(t--){
        cin >> n;
        ll a[n], sum{0}, sol{0};
        for(ll &i : a) {
            cin >> i;
            sum += i;
        }
        if(sum%n!=0) cout << -1 << endl;
        else{
            for(ll i : a) if(i > sum/n) sol++;
            cout << sol << endl;
        }
    }
    return 0;
}