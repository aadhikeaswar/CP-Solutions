#include <iostream>
#include <cmath>
typedef long long ll;
using namespace std;

int main() {
    ll n, k{0}, sol{0};
    cin >> n;
    while(pow(10,k+3) <= n) k+= 3, sol += n - pow(10, k) + 1;
    cout << sol;
    return 0;
}
