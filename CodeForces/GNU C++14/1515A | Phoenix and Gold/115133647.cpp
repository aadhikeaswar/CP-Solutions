#include <iostream>
using namespace std;
int main() {
    int n, x, t;
    cin >> t;
    while(t--){
        cin >> n >> x;
        int t1{0}, t2{0}, a[n];
        for(int &i : a) {
            cin >> i;
            t1 += i;
        }
        if(t1==x) cout << "NO";
        else {
            cout << "YES" << endl;
            for(int i = 0; i < n; i++){
                t2 += a[i];
                if(t2==x) {
                    cout <<  a[i+1] << " " << a[i] << " ";
                    t2+= a[++i];
                }
                else cout  << a[i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}