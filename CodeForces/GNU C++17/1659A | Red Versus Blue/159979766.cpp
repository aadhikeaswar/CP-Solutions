#include <iostream>
using namespace std;
int main() {
    int t, r, b, n;
    cin >> t;
    while(t--){
        cin >> n >> r >> b;
        int mp{r/(b+1)};
        while(b > 0){
            if(r % (b + 1) > 0) cout << "R";
            for(int i = 0; i < mp; i++) cout << "R";
            cout << "B";
            r -= mp + ((r%(b+1)) > 0 ? 1 : 0), b--;
        }
        if(r > 0) while(r--) cout << "R";
        cout << endl;
    }
    return 0;
}