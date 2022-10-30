#include <iostream>
using namespace std;
int main() {
    int n, aod{0}, arr[13845];
    cin >> n;
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i = 0; i < n; i++){
        if(aod%2==0 && abs(arr[i]%2)==1) {
            if(arr[i]<0) arr[i] /= 2, arr[i]--;
            else arr[i] /= 2;
            aod++;
        }
        else if(aod%2==1 && abs(arr[i]%2)==1){
            if(arr[i]< 0) arr[i] /=2;
            else arr[i]/= 2, arr[i]++;
            aod++;
        }
        else arr[i] /= 2;
    }
    for(int i = 0; i < n; i++) cout << arr[i] << endl;
    return 0;
}