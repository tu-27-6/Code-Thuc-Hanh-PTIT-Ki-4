#include <bits/stdc++.h>
using namespace std;

void kogiam(string s) {
	int n=s.size();
	bool check=true;
	
	for (int i=0; i<n-1; i++) {
		if ((s[i]-'0')>(s[i+1])-'0') {
			cout<<"NO"<<endl;
			check=false;
			break;
		}
	}
	
	if (check) {
		cout<<"YES"<<endl;
	}
}

int main() {
	int t;
	cin>>t;
	cin.ignore();
	
	while (t--) {
		string s;
		cin>>s;
		
		kogiam(s);
		
	}

	return 0;
}

