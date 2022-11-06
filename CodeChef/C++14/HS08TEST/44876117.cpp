#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int w;
    float b;
    cin >> w >> b;
    cout << fixed;
    if(w%5>0 || w > b-0.5) cout << setprecision(2) << b;
    else {
        b -= w, b-=0.5;
        cout << setprecision(2) << b;
    }
    return 0;   
}