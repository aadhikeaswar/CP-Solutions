#include <iostream>
using namespace std;
int main() {
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int sol{0}, i, j;
        string a;
        cin >> a;
        if(n%2 == 1) sol++, i = (n/2) - 1, j = (n/2) + 1;
        else i = (n/2) -1, j = (n/2);
        while(i >= 0 && j < n && a[i] == a[j] && a[i] == a[n/2]) sol += 2, i--, j++;
        cout << sol << endl;
    }
    return 0;
}