#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    int a{97}, sol{0}, x;
    for(char i : s){
               x = i;
               if(abs(x-a)<=13) sol+= abs(x-a);
               else sol += 26 - abs(x-a);
               a = x;
    }
    cout << sol;
}