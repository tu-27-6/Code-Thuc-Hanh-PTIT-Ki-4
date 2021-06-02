#include <bits/stdc++.h>
using namespace std;

void giaima(string s) {
	int n=s.size();
	
	for (int i=0; i<n; i++) {
		if (i%2==0) {
			continue;
		}
		int tmp=s[i]-'0';
		
		for (int j=0; j<tmp; j++) {
			cout<<s[i-1];
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
		
		giaima(s);
	}

	return 0;
}

