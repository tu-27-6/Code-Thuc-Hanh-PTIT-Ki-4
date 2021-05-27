#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void sobilap(ll arr[], ll n) {
	ll res=-1;
	set<ll> s;
	
	for (ll i=n-1; i>=0; i--) {
		if (s.find(arr[i])) {
			res=i;
		}
		else {
			s.insert(arr[i]);
		}
	}
	
	if (res==-1) {
		cout<<"NO"<<endl;
	}
	else {
		cout<<arr[res]<<endl;
	}

}

int main() {
	ll t;
	cin>>t;
	
	while (t--) {
		ll n;
		cin>>n;
		ll arr[n];
		
		for (ll i=0; i<n; i++) {
			cin>>arr[i];
		}
		
		sobilap(arr, n);
	}
	
	return 0;
}

