#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    char out[n], arr[n];
    for(char &x : arr) cin >> x;
    for(int i = 0; i < n ; i++){
        if(i%2==0) out[n-1-i/2] = arr[n-1-i];
        else out[i/2] = arr[n-1-i];
    }
    for(char x : out) cout << x;
    return 0;
}