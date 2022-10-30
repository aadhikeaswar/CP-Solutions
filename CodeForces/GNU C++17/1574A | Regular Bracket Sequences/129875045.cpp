#include <iostream>
#include <vector>
 
using namespace std;
int main() {
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        for(int k = 0; k < n; k++){
            vector<bool> ob(n,true);
            if(k != 0) ob[k] = false;
            for(int j = 0; j < n; j++) cout << (ob[j] ? "(" : ")");
            for(int j = n-1; j >= 0; j--) cout << (!ob[j] ? "(" : ")");
            cout << endl;
        }
    }
    return 0;
}