#include <iostream>
#include <cmath>
typedef long long ll;
using namespace std;
int main() {
    ll n, sol{0}, x[401], temp;
    for(ll &i : x) i = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> temp;
        x[temp+200]++;
    }
    for(int i = 0; i < 401; i++){
        if(x[i]==0) continue;
        for(int j = i+1; j < 401; j++) sol += x[i]*x[j]*((ll) pow(i-j,2));
    }
    cout << sol;
    return 0;
}
