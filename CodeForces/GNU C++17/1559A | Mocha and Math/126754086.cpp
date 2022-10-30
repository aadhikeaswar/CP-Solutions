#include <iostream>
using namespace std;
int main() {
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int arr[n];
        for(int &i : arr) cin >> i;
        int sol = arr[0];
        for(int i : arr) sol = (sol & i);
        cout << sol << endl;
    }
    return 0;
}