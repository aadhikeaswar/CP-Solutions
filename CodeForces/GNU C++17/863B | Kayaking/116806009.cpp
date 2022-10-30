#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n, sol{INT32_MAX};
    cin >> n;
    vector<int> arr(2*n);
    for(int &i : arr) cin >> i;
    sort(arr.begin(), arr.end());
    for(int i = 0; i < 2*n; i++) {
        for(int j = i + 1; j < 2*n; j++){
            int t1 = arr[i], t2  = arr[j], temp = INT32_MAX, stemp{0};
            arr.erase(arr.begin()+i), arr.erase(arr.begin()+(j-1));
            for(int k = 0;  k < arr.size(); k+=2) stemp += arr[k+1] - arr[k];
            temp = min(temp, stemp);
            arr.insert(arr.begin() + i, t1), arr.insert(arr.begin()+j,t2);
            sol = min(sol, temp);
        }
    }
    cout << sol;
    return 0;
}