#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n], res[n], pre[n][2], fds{n}, sds{0};
        for(int &i : arr) cin >> i;
        pre[0][0] = arr[0], pre[0][1] = 0;
        for(int i = 1; i < n; i++) {
            if(arr[i]>pre[i-1][0]) pre[i][0] = arr[i], pre[i][1] = i;
            else pre[i][0] = pre[i-1][0], pre[i][1] = pre[i-1][1];
        }
        while(fds>0){
            for(int i = pre[fds-1][1]; i < fds; i++) res[sds+i-pre[fds-1][1]] = arr[i];
            sds += fds - pre[fds-1][1];
           fds = pre[fds-1][1];
        }
        for(int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}