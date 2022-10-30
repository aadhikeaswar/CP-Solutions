#include <iostream>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b){
    if(a==0) return b;
    else return gcd(b%a, a);
}
ll gcdSum(ll x){
    ll ds{0}, n{x};
    while(n>0) ds += n%10, n/=10;
    return gcd(x, ds);
}
int main()
{
    ll t, n;
    cin >> t;
    while(t--){
        cin >> n;
        while(gcdSum(n)==1) n++;
        cout << n << endl;
    }
    return 0;
}