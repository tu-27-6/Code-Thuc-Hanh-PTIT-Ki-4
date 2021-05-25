#include <bits/stdc++.h>
using namespace std;

void LonNhat(int arr[], int n, int x) {
	sort(arr, arr+n, greater<int>());
	
	for (int i=0; i<x; i++) {
		cout<<arr[i]<<" ";
	}
	
	cout<<endl;
}

int main() {
	int t;
	cin>>t;
	
	while(t--) {
		int n, x;
		cin>>n>>x;
		
		int arr[n];
		
		for (int i=0; i<n; i++) {
			cin>>arr[i];
		}
		
		LonNhat(arr, n, x);
	}
	
	return 0;
}
