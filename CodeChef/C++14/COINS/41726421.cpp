#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
map<int, long long int> dp;
long long int f(int n){
    auto itr = dp.find(n);
    if(itr!=dp.end()) return itr->second;
    auto it = dp.insert({n,max((long long int) n,f(n/2)+f(n/3)+f(n/4))});
    return (it.first)->second;
}
int main() {
    int n;
    for(int i = 0; i < 12; i++) dp.insert({i,i});
    while (cin >> n) cout << f(n) << endl;
    return 0;
}
