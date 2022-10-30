#include <iostream>
using namespace std;
int main() {
    int t, n;
    cin >> t;
    while(t--){
        int z{0}, o{0};
        cin >> n;
        string s;
        cin >> s;
        for(char i : s){
            if(i == '1') o++;
            else z++;
        }
        if(o == n) cout << "DRAW";
        else if(z%2==0 || z == 1) cout << "BOB";
        else cout << "ALICE";
        cout << endl;
    }
    return 0;
}