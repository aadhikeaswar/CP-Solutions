#include <iostream>
using namespace std;

int main() {
    int t;
    float  k1, k2, k3, v;
    cin >> t;
    while(t--){
        cin >> k1 >> k2 >> k3 >> v;
        float time = 100/(k1*k2*k3*v);
        float ime = (int)(time * 100 + .5);
        if(ime<958) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}