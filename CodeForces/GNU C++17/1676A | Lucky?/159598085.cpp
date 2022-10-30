#include <iostream>
using namespace std;
int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int x{0}, y{0};
        for(int i = 0; i < 6 && n > 0; i++) x += (i < 3) ? (n % 10) : 0, y += (i < 3)? 0 : (n % 10), n /= 10;
        cout << ((x == y)? "yEs" : "nO") << endl;
    }
    return 0;
}