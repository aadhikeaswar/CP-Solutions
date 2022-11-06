#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
inline int read(){
    int n{0}; char c;
    while((c=getchar_unlocked())<48);
    n += (c-'0');
    while((c=getchar_unlocked())>=48) n = n*10 + (c-'0');
    return n;
}
int main() {
    int n = read(), k = read();
    int arr[n];
    for(int i = 0; i < n; i++) arr[i] = read();
    sort(arr,arr+n);
    ll pairs{0};
    for(int i = 0; i < n; i++){
        int j = i;
        for(int b = (n-i)/2; b >= 1; b /= 2){
            while(j+b< n && arr[j+b]<k-arr[i]) j+= b;
        }
        pairs += (ll)j-i;
    }
    printf("%lld", pairs);
    return 0;
}
