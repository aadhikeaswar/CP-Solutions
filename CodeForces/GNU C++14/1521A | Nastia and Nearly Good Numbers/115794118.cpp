#include <iostream>
using namespace std;
int main() {
    long long t, a, b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        if(b==1) cout << "NO" << endl;
        else cout << "YES" << endl << a << " " << a*b << " " << a*(b+1) << endl;
    }
    return 0;
}