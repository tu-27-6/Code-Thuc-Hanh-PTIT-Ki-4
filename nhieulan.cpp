#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void nhieulan(ll arr[], ll n) {
	sort(arr, arr+n);
	ll res=-1, max=1, count=1;
	
	for(int i=1;i<n;i++){
		if (arr[i]==arr[i-1]) {
			count++;
		}
		else {
			if(count>=max && count>n/2){
				max=count;
				res=arr[i-1];
			}
			count=1;
		}
	}
	
	if(count>=max && count>n/2){
		max=count;
		res=arr[n-1];
	}
	
	if (res!=-1) {
		cout<<res<<endl;
	}
	else {
		cout<<"NO"<<endl;
	}
	
}

int main() {
	int t;
	cin>>t;
	
	while (t--) {
		ll n;
		cin>>n;
		
		ll arr[n];
		for (ll i=0; i<n; i++) {
			cin>>arr[i];
		}
		
		nhieulan(arr, n);
	}

	return 0;
}

