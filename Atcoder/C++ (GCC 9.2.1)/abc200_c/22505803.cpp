#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    ll n, a[200], x, sol{0};
    cin >> n;
    for(ll &i : a) i = 0;
    while(n--){
        cin >> x;
        a[x%200]++;
    }
    for(ll &i : a) sol += (i*(i-1))/2;
    cout << sol;
    return 0;
}
