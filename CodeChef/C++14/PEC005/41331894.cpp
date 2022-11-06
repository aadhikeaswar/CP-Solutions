#include<bits/stdc++.h>
using namespace std;

int solve(int arr[], int n){
	int lis[n]; lis[0] = 1;
	for (int i = 1; i < n; i++){
		lis[i] = 1;
		for (int j = 0; j < i; j++){
			if (arr[i] >= arr[j] && lis[i] < lis[j] + 1){
				lis[i] = lis[j] + 1;
			}
		}
	}
	int max = 0;
	for(int i =0; i < n; i++) if(lis[i]>max) max = lis[i];
	return max;
}

int main(){
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		int arr[n];
		for (int i = 0; i < n ; i++){
			cin >> arr[i];
		}
		cout << solve(arr,n) << endl;
	}
	return 0;
}