#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int n, i{9};
        cin >> n;
        if(n==1) cout << 9 << endl;
        else {
            cout << 98;
            n -= 2;
            while(n--){
                cout << i % 10;
                i++;
            }
            cout << endl;
        }
    }
    return 0;
}