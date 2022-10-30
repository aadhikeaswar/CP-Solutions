#include <iostream>
using namespace std;
int main() {
    int n, arr[101], x;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> x;
        arr[x] = i;
    }
    for(int i = 1; i <= n; i++) cout << arr[i] << " ";
    return 0;
}