#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll uocso(ll n) {
	ll count=0;
	
	for (ll i=1; i<=sqrt(n); i++) {
		if (sqrt(n)==i && i%2==0) {
			count++;
		}
		
		if (sqrt(n)!=i) {
			if (n%i==0 && i%2==0) {
				count++;
			}
			
			if (n%(n/i)==0 && (n/i)%2==0) {
				count++;
			}
		}
	}
	
	return count;
}

int main() {
	ll t;
	cin>>t;
	
	while (t--) {
		ll n;
		cin>>n;
		
		cout<<uocso(n)<<endl;
		
	}
	
	return 0;
}
