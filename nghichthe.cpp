#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void nghichthe(ll arr[], ll n) {
	ll res=0;
	
	for (ll i=0; i<n-1; i++) {
		for (ll j=i+1; j<n; j++) {
			if (arr[i]>arr[j]) {
				res++;
			}
		}
	}
	
	cout<<res<<endl;
}

int main() {
	ll n;
	cin>>n;
	
	ll arr[n];
	
	for (ll i=0; i<n; i++) {
		cin>>arr[i];
	}
	
	nghichthe(arr, n);

	return 0;
}

