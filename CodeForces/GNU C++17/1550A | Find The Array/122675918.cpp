#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int sol{0}, s;
        cin >> s;
        for(int i = 1; i <= s; i += 2) s -= i, sol++;
        if(s > 0) sol++;
        cout << sol << endl;
    }
    return 0;
}