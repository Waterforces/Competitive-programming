#include<bits/stdc++.h>
using namespace std;
map<int,int> ma;
int main(void) {
	int m,max=ma[1];
	cin >> m;
	int n[m];
	for(int  i=0;i<m;i++) {
		cin >> n[i];
		ma[n[i]]++;
		if(ma[n[i]]>max) max=ma[n[i]];
	}
	vector<int> ve;
	for(int i=0;i<10000;i++) {
		if(ma[i]==max) {
			cout << i << " ";
		}
	}
/*	for(int i=0;i<sizeof(ve);i++) {
		cout << ve[i] << endl;
	} */
}