#include <iostream>
#include <vector>
 
using namespace std;
int main() {
    int t, n;
    cin >> t;
    while(t--){
        int w{0};
        cin >> n;
        vector<vector<int>> races(5, vector<int>(n));
        for(int i = 0; i < n; i++) for(int j = 0; j < 5; j++) cin >> races[j][i];
        for(int j = 0; j < n; j++){
            int temp{0};
            for(int i = 0; i < 5; i++) if(races[i][j] < races[i][w]) temp++;
            if(temp >= 3) w = j;
        }
        bool sol{true};
        for(int i = 0; i < n; i++){
            int temp{0};
            for(int j = 0; j < 5; j++) if(races[j][w] < races[j][i]) temp++;
            if(i != w) sol = sol && (temp >= 3);
        }
        cout << (sol  || n == 1 ? w + 1 : -1) << endl;
    }
    return 0;
}