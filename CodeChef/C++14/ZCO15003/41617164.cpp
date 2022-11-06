#include <iostream>
#include <algorithm>
using namespace std;
struct interval{
    int start;
    int stop;
};
bool comp(interval a, interval b){
    if(a.stop!=b.stop) return a.stop < b.stop;
    else return a.start < b.start;
}
int main() {
    int n;
    cin >> n;
    interval arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i].start >> arr[i].stop;
    sort(arr,arr+n, comp);
    int sol{0}, x{-1};
    for(int i = 0; i < n; i++){
        if(arr[i].start <= x) continue;
        else x = arr[i].stop, sol++;
    }
    printf("%d", sol);
    return 0;
}