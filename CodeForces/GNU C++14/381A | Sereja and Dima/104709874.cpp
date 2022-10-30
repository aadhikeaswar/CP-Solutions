#include <iostream>
using namespace std;
int main() {
    int n, s{0}, d{0}, f{0},l, x;
    cin >> n;
    l = n-1;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i = 0; i < n; i++){
        if(arr[f]>arr[l]) x = arr[f], f++;
        else x = arr[l], l--;
        if(i%2==0) s+=x;
        else d+=x;
    }
    cout << s << " " << d;
}