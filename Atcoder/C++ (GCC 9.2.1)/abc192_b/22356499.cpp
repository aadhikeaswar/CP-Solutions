#include <iostream>
#include <vector>
#include <algorithm>

typedef long long ll;
using namespace std;
ll f(ll n){
   vector<int> g;
   while(n>0) g.push_back(n%10), n /= 10;
   sort(g.begin(), g.end());
   ll g1{0}, g2{0};
   for(int i : g) g2 *= 10, g2 += i;
   for(int i = g.size()-1; i > -1; i--) g1 *= 10, g1 += g[i];
   return g1-g2;
}
int main() {
    ll n, k;
    cin >> n >> k;
    while (k--) n = f(n);
    cout << n;
    return 0;
}
