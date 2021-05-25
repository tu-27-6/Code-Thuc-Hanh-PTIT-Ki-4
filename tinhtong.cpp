#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void TongMin(string &s, string &x) {
	ll sumMin1=0, sumMin2=0;
	
	ll n=s.size();
	ll m=x.size();
	
	for (ll i=0; i<n; i++) {
		if (s[i]=='6') {
			s[i]='5';
		}
	}
	
	for (ll i=0; i<m; i++) {
		if (x[i]=='6') {
			x[i]='5';
		}
	}
	
	for (ll i=0; i<n; i++) {
		sumMin1=sumMin1*10+(s[i]-'0');
	}
	
	for (ll i=0; i<m; i++) {
		sumMin2=sumMin2*10+(x[i]-'0');
	}
	
	cout<<sumMin1+sumMin2<<" ";
}

void TongMax(string &s, string &x) {
	ll sumMax1=0, sumMax2=0;
	
	ll n=s.size();
	ll m=x.size();
	
	for (ll i=0; i<n; i++) {
		if (s[i]=='5') {
			s[i]='6';
		}
	}
	
	for (ll i=0; i<m; i++) {
		if (x[i]=='5') {
			x[i]='6';
		}
	}
	
	for (ll i=0; i<n; i++) {
		sumMax1=sumMax1*10+(s[i]-'0');
	}
	
	for (ll i=0; i<m; i++) {
		sumMax2=sumMax2*10+(x[i]-'0');
	}
	
	cout<<sumMax1+sumMax2<<endl;
}

int main() {
	int t;
	cin>>t;
	cin.ignore();
	
	while(t--) {
		string s;
		cin>>s;
		string x;
		cin>>x;
		
		TongMin(s, x);
		TongMax(s, x);
	}
	
	return 0;
}
