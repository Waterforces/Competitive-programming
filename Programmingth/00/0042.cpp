#include<bits/stdc++.h>
using namespace std;
int main(void) {
	int m;
	cin >> m;
	long double a[m];
	for(int i=0;i<m;i++) {
		cin >> a[i];
		printf("%.0Lf\n",pow(2,a[i]));
	}
}