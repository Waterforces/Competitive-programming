#include<bits/stdc++.h>	//i=1 v=5 x=10 l=50 c=100		399
using namespace std;
long long I,V,X,L,C;
void roman(int x) {
	if(x==0) return ;
//	cout << I << " " << V << " " << X << " " << L << " " << C << " " << x << endl;
	if(x>=100) {
		C++;
		x-=100;
		roman(x);
	}
	else if(x>=90) {
		C++;
		X++;
		x-=90;
		roman(x);
	}
	else if(x>=50) {
		L++;
		x-=50;
		roman(x);
	}
	else if(x>=40) {
		L++;
		X++;
		x-=40;
		roman(x);
	}
	else if(x>=10) {
		X++;
		x-=10;
		roman(x);
	}
	else if(x==9) {
		X++;
		I++;
		x-=9;
		roman(x);
	}
	else if(x>=5) {
		V++;
		x-=5;
		roman(x);
	}
	else if(x==4) {
		V++;
		I++;
		x-=4;
		roman(x);
	}
	else {
		I++;
		x--;
		roman(x);
	}
}
int main() {
	long long n;
	cin >> n;
	for(int i=1;i<=n;i++) {
		roman(i);
//		cout << I << " " << V << " " << X << " " << L << " " << C << endl;
	}
	cout << I << " " << V << " " << X << " " << L << " " << C;
}