#include <iostream>
using namespace std;
int main() {
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n],k, j;
        for(int &i : a) cin >> i;
        for(j = n-1; j > 0 && a[j-1] == 1; j--);
        for(k = 0; k < n && a[k+1] == 1; k++);
        cout << (j > k? j - k : 0) << endl;
    }
    return 0;
}