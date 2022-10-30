#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int n, x, i{0};
        cin >> n >> x;
        while(x){
            i+=2;
            x--;
        }
        cout << i << endl;
    }
    return 0;
}