#include <iostream>
using namespace std;

int main() {
    int t, n, k;
    cin >> t;
    while(t--){
        bool strong{false};
        cin >> n >> k;
        char c[n];
        for(char &i : c) cin >> i;
        for(int i = 0; i < n; i++) {
            int counter = 0;
            while(i < n && c[i] == '*') i++, counter++;
            if(counter >= k) strong = true;
        }
        if(strong) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}