#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int a[4], b[4];
        for(int i = 0; i < 4; i++){
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b+4);
        if((b[3]+b[2]) == (max(a[0], a[1]) + max(a[2],a[3]))) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}