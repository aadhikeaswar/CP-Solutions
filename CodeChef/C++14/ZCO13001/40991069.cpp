#include <iostream>
#include <algorithm>
typedef long long ll;
using namespace std;
bool comp(int x, int y){
    return  x > y;
};
int main() {
    int n;
    scanf("%d", &n);
    ll arr[n];
    ll adRevenue{0};
    for(int i = 0; i < n; i++) scanf("%lld", &arr[i]);
    sort(arr, arr+n, comp);
    for(int i = 0; i < n; i++) adRevenue -= i*arr[i];
    for(int i = 0; i < n; i++) adRevenue += (n-i-1)*arr[i];
    printf("%lld", adRevenue);
    return 0;
}
