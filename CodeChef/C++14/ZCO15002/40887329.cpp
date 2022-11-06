#include <iostream>
#include <algorithm>

using namespace std;
inline int read(){
    int n = 0; char c;
    while ((c=getchar_unlocked())<48);
    n += (c - '0');
    while ((c=getchar_unlocked())>=48) n = n*10 + (c - '0');
    return n;
}
int main() {
    int n = read(), k = read();
    int arr[n];
    for(int i = 0; i < n; i++) arr[i] = read();
    int count{0};
    sort(arr,arr+n);
    for(int i = 0; i < n; i++) {
        int j {i+1};
        while(j < n && arr[j] < arr[i]+k) j++;
        count += n-j;
    }
    printf("%d", count);
    return 0;
}