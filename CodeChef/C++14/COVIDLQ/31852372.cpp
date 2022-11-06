#include <vector>
#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    
    for (int i{0};i<t;i++){
        int n;
        cin >> n;
        int lastPos{-6};
        bool check {true};
        for(int j{0};j<n;j++){
            int p;
            cin >> p;
            if(p==1){
                if(j-lastPos<6) check = false;
                lastPos = j;
            }
        }
        if(check) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}