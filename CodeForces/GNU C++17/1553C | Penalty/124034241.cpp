#include <iostream>
using namespace std;
int main() {
    int t;
    string x;
    cin >> t;
    while(t--) {
        int f{0}, fc{0}, fl{5}, s{0}, sc{0}, sl{5};
        cin >> x;
        for (int i = 0; i < 10; i++) {
            if(i % 2 == 0){
                fl--;
                switch (x[i]) {
                    case '1': f++;
                    break;
                    case '?': fc++;
                    break;
                }
            }
            else{
                sl--;
                switch (x[i]) {
                    case '1': s++;
                    break;
                    case '?': sc++;
                    break;
                }
            }
            if(f+fc> s+sl) {
                cout << i + 1 << endl;
                break;
            }
            else if( s + sc > f + fl) {
                cout << i + 1 << endl;
                break;
            }
            if( i == 9) cout << 10 << endl;
        }
    }
    return 0;
}