#include <iostream>
#include <set>
typedef long long ll;
using namespace std;
ll f(ll n){
   multiset<int> g;
   while(n>0) g.insert(n%10), n /= 10;
   ll g1{0}, g2{0};
   for(int i : g) g2 *= 10, g2 += i;
   for(auto it = g.rbegin(); it != g.rend(); it++) g1 *= 10, g1 += *it;
   return g1-g2;
}
int main() {
    ll n, k;
    cin >> n >> k;
    while (k--) n = f(n);
    cout << n;
    return 0;
}
