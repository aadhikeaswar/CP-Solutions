#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;
int main() {
    vector<bool> prime(20012, true);
    for(int i = 2; i < 20012; i++) if(prime[i]) for(int j = 2; j * i < 20012; j++) prime[i*j] = false;
    ll t, d, p, q;
    cin >> t;
    while(t--){
        cin >> d;
        p = 1 + d;
        while(!prime[p])p++;
        q = p + d;
        while(!prime[q])q++;
        cout << min(p*p*p, p*q) << endl;
    }
    return 0;
}