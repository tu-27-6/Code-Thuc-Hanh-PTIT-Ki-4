#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void chia11(string s) {
	ll n=s.size();
	ll sum=0;
	
	for (ll i=0; i<n; i++) {
		if (i%2==0) {
			sum+=(s[i]-'0');
		}
		else {
			sum-=(s[i]-'0');
		}
	}
	
	if (sum%11==0) {
		cout<<1<<endl;
	}
	else {
		cout<<0<<endl;
	}
}

int main() {
	int t;
	cin>>t;
	
	
	while (t--) {
		string s;
		cin>>s;
		
		chia11(s);
	}

	return 0;
}

