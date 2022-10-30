#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int sol{0}, n = (int) s.size();
        for(char c : s) sol += ((int) c - 96);
        if(n == 1) cout << "Bob " << sol;
        else if (n % 2 == 0) cout << "Alice " << sol;
        else cout << "Alice " << sol - 2*(((int) min(s[0], s[n - 1])) - 96);
        cout << endl;
    }
    return 0;
}