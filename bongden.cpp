#include <bits/stdc++.h>
using namespace std;



int main() {
	int n, m, k;
	cin>>n>>m>>k;
	int arr[n];
	
	for (int i=0; i<n; i++) {
		arr[i]=1;
	}
	
	int den=0, res=n;
	
	for (int i=0; i<m; i++) {
		int tmp;
		cin>>tmp;
		arr[tmp-1]=0;
	}
	
	int check;
	
	for (int i=0; i<n-k+1; i++) {
		check=0;
		for (int j=i; j<i+k; j++) {
			if (arr[j]==0) {
				check++;
			}
		}
		if (check<res) {
			res=check;
		}
	}
	
	cout<<res<<endl;

	return 0;
}

