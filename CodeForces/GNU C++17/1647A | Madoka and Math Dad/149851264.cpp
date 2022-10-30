#include <iostream>
using namespace std;
int main() {
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int it = n/3;
        string s, add = (n%3 == 2)? "12" : "21";
        if(n%3 != 0) s = (n % 3 == 2)? "2" : "1";
        while(it--) s += add;
        cout << s << endl;
    }
    return 0;
}