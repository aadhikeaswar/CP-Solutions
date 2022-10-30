#include <iostream>
using namespace std;
int main() {
    int t, n;
    cin >> t;
    while(t--){
        string s;
        cin >> n >> s;
        int sol{0};
        for(int i = 0; i < n-1; i++) if(s[i] - 48) sol += ((int) s[i] - 48) + 1;
        sol += (int) s[n-1]  - 48;
        cout << sol << endl;
    }
    return 0;
}