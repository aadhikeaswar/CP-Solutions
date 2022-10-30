#include <iostream>
typedef long long ll;
using namespace std;
int main() {
    int t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        ll arr[n], x, y{0};
        for(ll &i : arr) cin >> i;
        x = arr[0];
        for(int i = 1; i < n; i++){
            if(arr[i]*100/x<k) {
                x += arr[i];
                continue;
            }
            if(((arr[i]*100)%x==0)) if(arr[i]*100/x==k) {
                x += arr[i];
                continue;
            }
            y+= (arr[i]*100/k)-x;
            x += (arr[i]*100/k)-x + arr[i];
            if((arr[i] * 100) % k != 0) x++, y++;
        }
        cout << y << endl;
    }
    return 0;
}