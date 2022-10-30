#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t, n, temp, c;
    cin >> t;
    while(t--){
        cin >> n;
        vector<int> a(n), msuf(n + 1, 501), x(n + 1);
        for(int &i : a) cin >> i;
        for(int i = n - 1; i >= 0; i--) msuf[i] = min(msuf[i + 1], a[i]), x[i] = (a[i] < msuf[i + 1])? i : x[i + 1];
        for(c = 0; msuf[c] == a[c]; c++);
        for(int i = 0; i + c < n && i + c < x[c] - i; i++) temp = a[i + c], a[i + c] = a[x[c] - i], a[x[c] - i] = temp;
        for(int i : a) cout << i << " ";
        cout << endl;
    }
    return 0;
}