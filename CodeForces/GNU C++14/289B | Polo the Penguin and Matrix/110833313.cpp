#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n, m, d, sol{0};
    cin >> n >> m >> d;
    int arr[n*m], reqmod, median;
    for(int &i : arr) cin >> i;
    reqmod = arr[0] % d;
    for(int &i : arr){
        if(i%d!=reqmod) {
            cout << -1;
            return 0;
        }
    }
    sort(arr,arr+(n*m));
    median = arr[(n*m)/2];
    for(int &i : arr) sol += abs(median - i)/d;
    cout << sol;
    return 0;
}