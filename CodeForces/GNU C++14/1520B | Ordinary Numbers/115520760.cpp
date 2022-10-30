#include <iostream>
typedef long long ll;
using namespace std;
int main() {
    ll t, n;
    cin >> t;
    while(t--){
        ll sol{0};
        cin >> n;
        for(int i = 1; i <= 9; i++){
            int temp = i;
            for(int j = 0; j < 9; j++) {
                if(temp <= n) sol++;
                else break;
                temp*=10, temp+=i;
            }
        }
        cout << sol << endl;
    }
    return 0;
}