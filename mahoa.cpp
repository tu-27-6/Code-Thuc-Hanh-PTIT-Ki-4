#include <bits/stdc++.h>
using namespace std;

void mahoa(string s) {
	int n=s.size();
	int check[100];
	
	for (int i=0; i<100; i++) {
		check[i]=1;
	}
	
	int tmp=0;
	
	for (int i=0; i<n-1; i++) {
		if (s[i]==s[i+1]) {
			check[tmp]++;
		}
		else {
			tmp++;
		}
	}
	
	tmp=0;
	
	for (int i=0; i<n; i++) {
		if (s[i]!=s[i+1]) {
			cout<<s[i]<<check[tmp];
			tmp++;
		}
	}
	
	cout<<endl;
	
}

int main() {
	int t;
	cin>>t;

	while (t--) {
		string s;
		cin>>s;
		
		mahoa(s);
	}

	return 0;
}

