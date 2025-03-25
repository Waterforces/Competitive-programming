#include<bits/stdc++.h>
using namespace std;
int main(void) {
	int m,x;
	cin >> m;
	string s;
	for(int i=1;i<=m;i++) {
		cin >> s;
		x=s.length();
		if(s[x-1]-'0'==2 && x==1) cout << "T" << endl;
		else if((s[x-1]-'0')%2==1) cout << "T" << endl;
		else cout << "F" << endl;
	}
}