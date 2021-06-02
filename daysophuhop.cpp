#include <bits/stdc++.h>
using namespace std;

void daysophuhop(int a[], int b[], int n) {
	int check=-1;
	for (int i=0; i<n; i++) {
		if (a[i]>b[i]) {
			cout<<"NO"<<endl;
			check=1;
			break;
		}
	}
	
	if (check==-1) {
		cout<<"YES"<<endl;
	}
}

int main() {
	int t;
	cin>>t;
	
	while (t--) {
		int n;
		cin>>n;
		int a[n], b[n];
		
		for (int i=0; i<n; i++) {
			cin>>a[i];
		}
		
		for (int i=0; i<n; i++) {
			cin>>b[i];
		}
		
		sort(a, a+n);
		sort(b, b+n);
		
		daysophuhop(a, b, n);
	}

	return 0;
}

