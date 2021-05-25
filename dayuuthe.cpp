#include <bits/stdc++.h>
using namespace std;

void split(string s, vector<string> &v) {
	string tmp="";
	
	for (int i=0; i<s.size(); i++) {
		if (s[i]==' ') {
			v.push_back(tmp);
			tmp="";
		}
		else {
			tmp.push_back(s[i]);
		}
	}
	
	v.push_back(tmp);
}

void dayuuthe(string s, vector<string> &v) {
	split(s, v);
	
	int size=v.size();
	
	int chan=0, le=0;
	

	for (int i=0; i<size; i++) {
		if ((atoi(v[i].c_str()))%2==0) {
			chan++;
		}
		else {
			le++;
		}
	}
	
	if (chan>le && size%2==0) {
		cout<<"YES"<<endl;
	}
	else if (le>chan && size%2!=0) {
		cout<<"YES"<<endl;
	}
	else {
		cout<<"NO"<<endl;
	}
	
}

int main() {
	int t;
	cin>>t;
	cin.ignore();
	while (t--) {
		string s;
		getline(cin, s);
		
		vector<string> v;
		
		dayuuthe(s, v);
		
	}
	
	return 0;
}
