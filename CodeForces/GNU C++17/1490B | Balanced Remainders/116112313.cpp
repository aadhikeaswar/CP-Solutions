#include <iostream>
using namespace std;
int main() {
    int t, n, temp;
    cin >> t;
    while(t--){
        cin >> n;
        int a[3], sol{0}, i{0};
        for(int &j : a) j = 0;
        for(int x = 0; x < n; x++){
            cin >> temp;
            a[temp%3]++;
        }
        while(true) {
            if(a[i] > n/3) sol += a[i] - (n/3), a[(i+1)%3] += a[i] - (n/3), a[i] = n/3;
            if(a[0]==a[1] && a[1]==a[2]) break;
            i = (i+1)%3;
        }
        cout << sol << endl;
    }
    return 0;
}