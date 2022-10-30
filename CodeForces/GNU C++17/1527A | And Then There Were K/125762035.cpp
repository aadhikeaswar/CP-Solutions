#include <iostream>
using namespace std;
int main() {
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int cnt = 0;
        while(n != 1) {
            cnt++, n = (n >> 1);
        }
        cout << (1 << cnt) - 1 << endl;
    }
    return 0;
}