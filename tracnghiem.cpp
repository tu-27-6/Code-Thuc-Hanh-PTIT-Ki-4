#include <bits/stdc++.h> 
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--) {
		int n;
		cin>>n;
		char a[15]={'A', 'B', 'B', 'A', 'D',
		'C', 'C','A', 'B', 'D', 'C', 'C', 'A',
		'B', 'D'};
		
		char b[15]={'A', 'C', 'C', 'A', 'B',
		'C', 'D','D', 'B', 'B', 'C', 'D', 'D',
		'B', 'B'};
		
		float res=0.0;
		float x=10.00/15.00;
		
		char c[15];
		if (n==101) {
			for (int i=0; i<15; i++) {
				cin>>c[i];
			}
			
			for (int i=0; i<15; i++) {
				if (c[i]==a[i]) {
					res+=x;
				}
			}
		}
		else if (n==102) {
			for (int i=0; i<15; i++) {
				cin>>c[i];
			}
			
			for (int i=0; i<15; i++) {
				if (c[i]==b[i]) {
					res+=x;
				}
			}
		}
		
		cout<<setprecision(2)<<fixed<<res<<endl;
	}
		
		
	
}

