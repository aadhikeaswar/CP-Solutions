#include <iostream>
using namespace std;
int main() {
    int n, sol{0};
    cin >> n;
    while (n--){
        int temp{0}, x;
        for(int i = 0; i< 3; i++){
            cin >> x;
            temp+=x;
        }
        if(temp>1) sol++;
    }
    cout << sol;
}