#include <bits/stdc++.h>
using namespace std; 

int main() {
	int t;
	cin>>t;
	
	while(t--) {
		int n, m;
		cin>>n>>m;
		
		int arr[n][m];
		
		for (int i=0; i<n; i++) {
			for (int j=0; j<m; j++) {
				cin>>arr[i][j];
			}
		}
		
		int sRow=0, sCol=0;
	
	while(sRow<n && sCol<m) {
		for (int i=sCol; i<m; i++) {
			cout<<arr[sRow][i]<<" ";
		}
		sRow++;
		
		for (int i=sRow; i<n; i++) {
			cout<<arr[i][m-1]<<" ";
		}
		m--;
		
		if (sRow<n) {
			for (int i=m-1; i>=sCol; i--) {
				cout<<arr[n-1][i]<<" ";
			}
			n--;
		}
		
		if (sCol<m) {
			for (int i=n-1; i>=sRow; i--) {
				cout<<arr[i][sCol]<<" ";
			}
			sCol++;
		}
	}
		
		cout<<endl;
	}
	
	
	return 0;
}
