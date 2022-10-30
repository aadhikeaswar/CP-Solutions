#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        bool sol{false};
        for(int i = 0; i < 3; i++) {
            int temp{0};
            for(char j : s){
                temp = (j == i + 65)? temp + 1 : temp - 1;
                if(temp < 0) break;
            }
            if(temp == 0) {
                sol = true;
                goto output;
            }
            temp = 0;
            for(char & j : s) {
                temp = (j == i + 65)? temp - 1 : temp + 1;
                if(temp < 0) break;
            }
            if(temp == 0) {
                sol = true;
                goto output;
            }
        }
        output:
         cout << (sol ? "yes" : "no") << endl;
    }
    return 0;
}