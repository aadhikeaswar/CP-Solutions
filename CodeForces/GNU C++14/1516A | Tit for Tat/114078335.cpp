#include <iostream>
using namespace std;
int main() {
    int t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        int arr[n], x{0};
        for(int &i : arr) cin >> i;
        while(k--){
           if(arr[x] > 0) arr[x]--, arr[n-1]++;
           else {
               while(arr[x] == 0) x++;
               k++;
               if(x>=n) break;
           }
        }
        for(int i : arr) cout << i << " ";
        cout << endl;
    }
    return 0;
}