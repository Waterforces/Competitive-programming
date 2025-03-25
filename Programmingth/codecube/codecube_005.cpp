#include<bits/stdc++.h>
using namespace std;
int main(void) {
	int m;
	cin >> m;
	long long a[m],b=1;
	for(int i=0;i<m;i++) {
		cin >> a[i];
		b=b*(a[i])/__gcd(b,a[i]);
	}
	cout << b;
}