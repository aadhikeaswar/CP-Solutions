#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int n, u, v, sol{INT32_MAX};
        cin >> n >> u >> v;
        int arr[n];
        cin >> arr[0];
        for(int i = 1; i < n; i++){
            cin >> arr[i];
            if(abs(arr[i]-arr[i-1])>1) sol = 0;
            if(abs(arr[i]-arr[i-1])==1) sol = min(sol, v);
            if(arr[i]-arr[i-1]==0) sol = min(sol, min(2*v, u+v));
            if(arr[i]-arr[i-1]!=0) sol = min(sol, u);
        }
        cout << sol << endl;
    }
    return 0;
}