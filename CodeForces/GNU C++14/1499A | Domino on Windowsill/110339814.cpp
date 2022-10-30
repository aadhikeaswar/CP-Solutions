#include <iostream>
using namespace std;
int main() {
    int t, n, k1, k2, w, b;
    cin >> t;
    while(t--){
        cin >> n >> k1 >> k2 >> w >> b;
        if((k1+k2>=2*w) && (2*n-k1-k2 >= 2*b)) cout << "yEs";
        else cout << "nO";
        cout << endl;
    }
    return 0;
}