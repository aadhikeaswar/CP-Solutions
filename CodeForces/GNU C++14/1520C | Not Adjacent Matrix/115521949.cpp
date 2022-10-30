#include <iostream>
using namespace std;
int main() {
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        if(n==1) cout << 1;
        else if (n == 2) cout << -1;
        else {
            int a[n*n], e{2}, o{1}, i{0};
            while(e <= n*n) a[i++] = e, e += 2;
            while(o <= n*n) a[i++] = o, o += 2;
            i = 0;
            for(int k = 0; k < n; k++){
                for(int j = 0; j < n; j++) {
                    cout << a[i] << " ";
                    i++;
                }
                cout << endl;
            }
        }
        cout << endl;
     }
    return 0;
}