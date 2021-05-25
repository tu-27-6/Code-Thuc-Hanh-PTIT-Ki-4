#include <iostream>
#include <string>

using namespace std;

int ktCach(char c) {
	if (c==' ')
		return 1;
	return 0;	
}

int ktHoa(char c) {
	if (c>='A' && c<='Z')
		return 1;
	return 0;	
}

void xoaCach(string &s) {
	while(ktCach(s[0])) {
		s.erase(s.begin());
	}
	
	while(ktCach(s[s.length()-1])) {
		s.erase(s.length()-1);
	}
	
	for (int i=0; i<s.length(); i++) {
		if (ktCach(s[i]) && ktCach(s[i+1])) {
			s.erase(i);
			i--;
		}
	}
}

void xoaHoa(string &s) {
	for (int i=0; i<s.length(); i++) {
		if (ktHoa(s[i]) && !ktCach(s[i])) {
			s[i]+=32;
		}
	}
}

void email(string &s) {
	xoaCach(s);
	xoaHoa(s);
	
	string x;
	x+=s[0];
	
	int tmp;
	
	for (int i=0; i<s.length(); i++) {
		if (!ktCach(s[i]) && ktCach(s[i-1])) {
			x+=s[i];
			tmp=i;
		}
	}
	
	x.erase(x.end()-1);
	
	string ten;
	ten=s.substr(tmp, s.length()-1);
	
	cout<<x<<ten<<"@ptit.edu.vn";
}

int main() {
	string s;
	getline(cin, s);
	email(s);
	
	return 0;
}
