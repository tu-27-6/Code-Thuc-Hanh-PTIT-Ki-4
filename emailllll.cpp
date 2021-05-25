#include <bits/stdc++.h>
using namespace std;

void DeleteSpace(string &s) {
	while(s[0]==' ') {
		s.erase(s.begin());
	}
	
	while(s[s.size()-1]==' ') {
		s.erase(s.size()-1);
	}
	
	for (int i=0; i<s.size(); i++) {
		if (s[i]==' ' && s[i+1]==' ') {
			s.erase(i);
			i--;
		}
	}
}

void Lower(string &s) {
	for (int i=0; i<s.size(); i++) {
		if (s[i]>='A' && s[i]<='Z') {
			s[i]+=32;
		}
	}
}



int main() {
	string s;
	getline(cin, s);
	DeleteSpace(s);
	Lower(s);
	
	string first;
	first+=s[0];
	
	int tmp;
	
	for (int i=0; i<s.size(); i++) {
		if (s[i]!=' ' && s[i-1]==' ') {
			first+=s[i];
			tmp=i;
		}
	}
	
	string full;
	
	first.erase(first.end()-1);
	
	full+=s.substr(tmp, s.size()-1);
	
	cout<<first<<full<<"@ptit.edu.vn";
	
	return 0;
}
