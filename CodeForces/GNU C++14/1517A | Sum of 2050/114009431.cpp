#include <iostream>
#include <cmath>
typedef long long ll;
using namespace std;
int main() {
    ll t, n;
    cin >> t;
    while(t--){
        cin >> n;
        ll sol{0}, k{0};
        while(k>-1){
            if(n > 2050*pow(10,k)) while (n >= 2050*pow(10,k+1)) k++;
            else if(n < 2050*pow(10,k)) while((n < 2050*pow(10,k)) && k >= 0) k--;
            if(k==-1) break;
            sol += n/(2050*pow(10,k)), n = n % (ll) (2050*pow(10,k));
        }
        if(n==0) cout << sol << endl;
        else cout << -1 << endl;
    }
    return 0;
}