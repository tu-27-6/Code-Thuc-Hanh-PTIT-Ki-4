#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

void sorting14(ll arr[], ll n) {
	sort(arr, arr+n);
	
	ll count=0;
	
	for (ll i=0; i<n-1; i++) {
		if (arr[i+1]-arr[i]>1) {
			count+=(arr[i+1]-arr[i])-1;
		}
	}

	cout<<count<<endl;
}

int main() {
	int t;
	cin>>t;
	
	while(t--) {
		ll n;
		cin>>n;
		ll arr[n];
		
		for (ll i=0; i<n; i++) {
			cin>>arr[i];
		}
		
		sorting14(arr, n);
	}
	
	return 0;
}
