#include <iostream>
typedef long long ll;
using namespace std;
int main() {
    ll t;
    cin >> t;
    while(t--){
        ll p, l[3], sol{INT64_MAX};
        cin >> p >> l[0] >> l[1] >> l[2];
        for(ll i : l){
            if(p%i==0) sol = 0;
            else sol = min(sol, i-(p%i));
        }
        cout << sol << endl;
    }
 
   return 0;
}