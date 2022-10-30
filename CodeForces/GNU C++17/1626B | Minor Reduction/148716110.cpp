#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int pos = 0;
        for(int i = 0; i < s.size() - 1; i++) if(s[i] + s[i + 1] >= 106) pos = i;
        for(int i = 0; i < s.size(); i++) {
            if(i == pos) {
                cout << s[i] + s[i + 1] - 96;
                i++;
            }
            else cout << s[i];
        }
        cout << endl;
    }
    return 0;
}