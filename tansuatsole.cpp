#include <bits/stdc++.h>
using namespace std;

int tansuatsole(int arr[], int n) {
	int count=1;
	
	for (int i=1; i<n; i++) {
		if (arr[i]==arr[i-1]) {
			count++;
		}
		else {
			if (count%2!=0) {
				return arr[i-1];
			}
			count=1;
		}
	}
	
	if (count%2!=0) {
		return arr[n-1];
	}
}

int main() {
	int t;
	cin>>t;
	
	while (t--) {
		int n;
		cin>>n;
		
		int arr[n];
		
		for (int i=0; i<n; i++) {
			cin>>arr[i];
		}
		
		sort(arr, arr+n);
		
		cout<<tansuatsole(arr, n)<<endl;
	}

	return 0;
}

