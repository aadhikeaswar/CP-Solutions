#include <iostream>
using namespace std;
int main() {
    int t, n, x;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 0; i < n; i++) cin >> x;
        cout << 3*n << endl;
        for(int i = 0; i < n; i += 2) for(int j = 0; j < 6; j++) cout << (j%2) + 1 << " " << i + 1 << " " << i + 2 << endl;
    }
    return 0;
}