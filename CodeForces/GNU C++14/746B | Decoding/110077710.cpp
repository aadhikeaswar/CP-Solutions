#include <iostream>
using namespace std;
int main() {
    int n;
    scanf("%d\n", &n);
    char out[n], arr[n];
    for(char &x : arr) scanf("%c", &x);
    for(int i = 0; i < n ; i++){
        if(i%2==0) out[n-1-i/2] = arr[n-1-i];
        else out[i/2] = arr[n-1-i];
    }
    for(char x : out) printf("%c", x);
    return 0;
}