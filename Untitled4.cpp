#include <bits/stdc++.h>
using namespace std;

int maDe;
char baiLam[15];
char dapAn1[15]={'A', 'B', 'B', 'A', 'D',
	'C', 'C','A', 'B', 'D', 'C', 'C', 'A',
	'B', 'D'};
char dapAn2[15]={'A', 'C', 'C', 'A', 'B',
	'C', 'D','D', 'B', 'B', 'C', 'D', 'D',
	'B', 'B'};

void TinhDiem(int maDe) {
	float res=0.0f;
	float diem=(float)10/15;
	
	if (maDe==101) {
		for (int i=0; i<15; i++) {
			if (baiLam[i]==dapAn1[i]) {
				res+=diem;
			}
		}
	}
	else if (maDe==102) {
		for (int i=0; i<15; i++) {
			if (baiLam[i]==dapAn2[i]) {
				res+=diem;
			}
		}
	}
	
	cout<<fixed<<setprecision(2)<<res<<endl;
}

int main() {
	int t;
	cin>>t; 
	
	while(t--) {
		cin>>maDe;
		
		for (int i=0; i<15; i++) {
			cin>>baiLam[i];
		}
		
		TinhDiem(maDe);
	}

	return 0;
}
