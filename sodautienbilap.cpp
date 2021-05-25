#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll solap(ll arr[], ll n) {
	for (ll i=0; i<n-1; i++) {
		for (ll j=i+1; j<n; j++) {
			if (arr[i]==arr[j]) {
				return arr[i];
			}
		}
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
		
		cout<<solap(arr, n)<<endl;
	}
	
	return 0;
}
