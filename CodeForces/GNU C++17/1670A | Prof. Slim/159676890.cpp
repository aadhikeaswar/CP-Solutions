#include <iostream>
using namespace std;
int main() {
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n], neg{0};
        for(int &i : a)  cin >> i;
        if(n == 1){
            cout << "YES" << endl;
            continue;
        }
        for(int i : a) if(i < 0) neg++;
        bool flag{true};
        for(int i = 0, j = 0; i < n; i++) if(a[i] < 0) a[j++] *= -1, a[i] *= -1;
        for(int i = 0; i < n - 1; i++) flag &= a[i] <= a[i + 1];
        cout << (flag ? "YES" : "NO") << endl;
    }
    return 0;
}