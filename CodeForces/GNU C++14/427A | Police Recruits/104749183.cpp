#include <iostream>
using namespace std;
int main() {
    int n,x, recr{0}, sol{0};
    cin >> n;
    while(n--){
       cin >> x;
       if(x==-1 && recr==0) sol++;
       else if(x==-1 && recr>0) recr--;
       else recr+= x;
    }
    cout << sol;
}