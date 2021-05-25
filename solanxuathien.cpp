#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

void solanxuathien(ll arr[], ll n, ll k) {
	ll count=0;
	
	for (ll i=0; i<n; i++) {
		if (arr[i]==k) {
			count++;
		}
	}
	
	cout<<count<<endl;
}

int main() {
	int t;
	cin>>t;
	
	while(t--) {
		ll n, k;
		cin>>n>>k;
		ll arr[n];
		
		for (ll i=0; i<n; i++) {
			cin>>arr[i];
		}
		
		solanxuathien(arr, n, k);
	}
	
	return 0;
}
