#include <iostream>
using namespace std;
int main() {
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int arr[n];
        for(int &i : arr) cin >> i;
        for(int i = 0; i < n; i++) for(int j = i + 1; j < n; j++) {
            int ti = arr[i], tj = arr[j];
            for(int k = 0; k <= 30 && tj > 0 && ti > 0; k++){
                if(tj % 2 == ti % 2 && ti % 2 == 1) arr[j] -= 1 << k;
                ti /= 2, tj /= 2;
            }
        }
        int sol{0};
        for(int i : arr) sol += i;
        cout << sol << endl;
    }
    return 0;
}