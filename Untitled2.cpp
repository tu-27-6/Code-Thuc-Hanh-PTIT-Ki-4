#include <bits/stdc++.h>
using namespace std;

int main() {
	string s="tu dep trai pro vip";
	
	s.erase(s.begin()+3);
	
	for (int i=0; i<s.size(); i++) {
		cout<<s[i]<<" ";
	}
	
}
