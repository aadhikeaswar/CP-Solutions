#include <iostream>
typedef long long ll;
using namespace std;
const int mod = 1e9 + 7;
int main() {
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        ll sol{1};
        for(int i = 2*n; i > 2; i--) sol = (sol*i) % mod;
        cout << sol << endl;
    }
    return 0;
}