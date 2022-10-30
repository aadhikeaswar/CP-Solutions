#include <iostream>
#include <map>
#include <cmath>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int n, k, a{0}, b{0};
        cin >> n >> k;
        int arr[n];
        map<int, bool> exi;
        for(int &i : arr) {
            cin >> i;
            exi[i] = true, a = max(a,i);
        }
        if(k==0){
            cout << n << endl;
            continue;
        }
        while(exi[b]) b++;
        if(b>a) {
            cout << n+k << endl;
            continue;
        }
        int temp{(int)ceil((float)(a+b)/2)};
        if(exi[temp]) cout << n << endl;
        else cout << n + 1 << endl;
    }
    return 0;
}