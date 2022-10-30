#include <iostream>
using namespace std;
typedef long long ll;
int main() {
    ll n, k;
    cin >> n >> k;
    while(k--){
        if(n%200==0) n /= 200;
        else n *= 1000, n += 200;
    }
    cout << n;
    return 0;
}
