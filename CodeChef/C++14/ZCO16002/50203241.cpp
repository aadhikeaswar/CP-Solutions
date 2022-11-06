#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
const int mx = 1e5 + 1;
bool arr[mx];
vector<int> ar;
int main() {
    int n, sol = 0;
    cin >> n;
    ar.resize(n);
    for(int &i : ar) {
        cin >> i;
        arr[i] = true;
    }
    sort(ar.begin(), ar.end());
    for(int i : ar){
        for(int j = 1; mx/j >= sol && i + j < mx; j++) {
            if(!arr[i+j]) continue;
            int temp = 1, t2 = i + j;
            while(t2 < mx && arr[t2]) t2 += j, temp++;
            sol = max(sol, temp);
        }
    }
    cout << sol;
    return 0;
}
