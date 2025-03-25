#include<bits/stdc++.h>
using namespace std;
int main(void) {
	long long m,sum=0;
	cin >> m;
	long long a[m];
	cin >> a[0];
	long long b=a[0];
	for(int i=1;i<m;i++) {
		cin >> a[i];
		b=__gcd(b,a[i]);
	}
	for(int i=0;i<m;i++) {
		sum+=a[i]/b;
	}
	cout << sum;
}