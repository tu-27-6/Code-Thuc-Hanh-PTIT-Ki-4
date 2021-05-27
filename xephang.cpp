#include <bits/stdc++.h>
using namespace std;

typedef long long ll;



int main() {
		ll s;
		cin>>s;
		
		ll t, d;
		vector<ll> thoigian;
		vector<ll> checkin;
		
		ll n;
		
		while (s--) {			
			cin>>t>>d;
			
			thoigian.push_back(t);
			checkin.push_back(d);
		}	
	
		
	 	n=thoigian.size();
	 	
	 	for (ll i=0; i<n-1; i++) {
	 		for (ll j=0; j<n-i-1; j++) {
	 			if (thoigian[j]>thoigian[j+1]) {
	 				swap(thoigian[j], thoigian[j+1]);
	 				swap(checkin[j], checkin[j+1]);
				 }
			 }
		 }
		 
		 ll res=thoigian[0]+checkin[0];
		 for (ll i=1; i<n; i++) {
		 	if (thoigian[i]>=res) {
		 		res=thoigian[i]+checkin[i];
			 }
			 else {
			 	res+=checkin[i];
			 }
		 }
		 
		 cout<<res;

		
	return 0;
}

