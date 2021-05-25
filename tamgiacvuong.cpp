#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool check(ll a, ll b, ll c) {
	if (a+c<=c) {
		return false;
	}
	
	ll p1=a, p2=c-b;
	ll q1=c+b, q2=a;
	
	ll gcd=__gcd(p1, p2);
	p1/=gcd, p2/=gcd;
	
	gcd=__gcd(q1, q2);
	q1/=gcd, q2/=gcd;
	
	return (p1==q1 && p2==q2);
}

bool tamgiacvuong(ll arr[], ll n) {
	if (n<3) {
		return false;
	}
	
	sort(arr, arr+n);
	
	for (ll i=0; i<n-2; i++) {
		if (check(arr[i], arr[i+1], arr[i+2])) {
			return true;
		}
	}
	
	return false;
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
		
		if (tamgiacvuong(arr, n)) {
			cout<<"YES"<<endl;
		}
		else {
			cout<<"NO"<<endl;
		}
	}
	
	return 0;
}
