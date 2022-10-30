#include <iostream>
using namespace std;
int main() {
    int a{0},d{0}, n;
    cin >> n;
    for(int i = 0; i < n; i++){
        char c;
        cin >> c;
        if(c=='A') a++;
        else d++;
    }
    if(a>d) cout << "Anton";
    else if(a<d) cout << "Danik";
    else cout << "Friendship";
}