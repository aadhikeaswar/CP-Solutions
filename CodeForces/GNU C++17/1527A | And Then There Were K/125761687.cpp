#include <iostream>
using namespace std;
int main() {
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int cnt = -1;
        while(n != 0) cnt++, n/= 2;
        cout << (1 << cnt) - 1 << endl;
    }
    return 0;
}