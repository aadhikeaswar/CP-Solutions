#include <iostream>
#include <algorithm>
typedef long long ll;
using namespace std;
bool comp(int a, int b){
    return a>b;
}
inline int read(){
    int n = 0; char c;
    while ((c=getchar_unlocked())<48);
    n += (c - '0');
    while ((c=getchar_unlocked())>=48) n = n*10 + (c - '0');
    return n;
}
int main() {
    int n = read();
    ll arr[n];
    for(int i = 0; i < n; i++) arr[i] = read();
    sort(arr,arr+n,comp);
    ll maxRevenue = INT64_MIN;
    for(int i = 0; i < n; i++) maxRevenue = max(maxRevenue, (i+1)*arr[i]);
    printf("%lld", maxRevenue);
    return 0;
}
