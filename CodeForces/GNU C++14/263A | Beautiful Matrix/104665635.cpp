#include <iostream>
using namespace std;
int main() {
    for(int i = 1; i < 6; i++){
        for(int j = 1; j< 6; j++){
            int x;
            cin >> x;
            if(x==1){
                cout << abs(3-i) +abs(3-j);
                break;
            }
        }
    }
}