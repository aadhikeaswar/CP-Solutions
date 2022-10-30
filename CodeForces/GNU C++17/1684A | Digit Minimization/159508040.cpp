#include <iostream>
using namespace std;
int main() {
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        if(n < 100) cout << n%10 << endl;
        else {
            int sol{9};
            while(n > 0) sol = min(sol, n%10), n/= 10;
            cout << sol << endl;
        }
    }
    return 0;
}