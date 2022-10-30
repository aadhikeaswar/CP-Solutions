#include <iostream>
typedef long long ll;
using namespace std;
int main() {
    ll t, n;
    cin >> t;
    while(t--){
        cin >> n;
        ll x{n/6}, y{n/4};
        if(n%2 == 1 || n == 2){
            cout << -1 << endl;
            continue;
        }
        if(n%6 > 0) x++;
        cout << x << " " << y << endl;
    }
    return 0;
}