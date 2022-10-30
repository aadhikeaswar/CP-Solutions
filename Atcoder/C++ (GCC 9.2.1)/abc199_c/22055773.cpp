#include <iostream>
using namespace std;
int main() {
    int n, q, t, a, b, cnt{0};
    cin >> n;
    char temp;
    string s;
    cin >> s;
    cin >> q;
    while(q--){
        cin >> t >> a >> b;
        a--,b--;
        if(cnt%2==1) a = (a+n)%(2*n), b = (b+n)%(2*n);
        if(t==1) temp = s[a], s[a] = s[b], s[b] = temp;
        else if(t==2) cnt++;
    }
    if(cnt % 2 == 0)for(char c : s) cout << c;
    else {
        for(int i = 0; i < n; i++) cout << s[n+i];
        for(int i = 0; i < n; i++) cout << s[i];
    }
    return 0;
}
