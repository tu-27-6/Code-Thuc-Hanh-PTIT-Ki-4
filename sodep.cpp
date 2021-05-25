#include <bits/stdc++.h>
using namespace std;

void sodep(string &s) {
	string x=s;
	reverse(s.begin(), s.end());
	
	int n=x.size();
	
	bool check=true;
	
	for (int i=0; i<n; i++) {
		if ((x[i]-'0')%2!=0) {
			check=false;
			break;
		}
	}
	
	if (x==s && check) {
		cout<<"YES"<<endl;
	}
	else {
		cout<<"NO"<<endl;
	}
}

int main() {
	int t;
	cin>>t;
	
	while (t--) {
		string s;
		cin>>s;
		
		sodep(s);
	}
	
	return 0;
}
