#include<bits/stdc++.h>
using namespace std;
int main(void) {
	int m[3];
	vector<int> a,b,c,d;
	cin >> m[0] >> m[1] >> m[2];
	for(int i=-100;i<100;i++) {
		for(int j=-100;j<100;j++) {
			if(i*j==m[0] && i>0 && j>0 && i<=j) {
				a.push_back(i);
				c.push_back(j);
			}
			if(i*j==m[2]) {
				b.push_back(i);
				d.push_back(j);
			}
		}
	}
//	cout << a[0] << b[1] << c[0] << d[1] << endl;
	int x=0,y=sizeof(a),z=sizeof(b);
	for(int i=0;i<y;i++) {
		for(int j=0;j<z;j++) {
		//	cout << 2;
			if((a[i]*d[j])+(c[i]*b[j])==m[1]) {
//				cout << m[1];
				cout << a[i] << " " << b[j] << " " << c[i] << " " << d[j];
				return 0;
			}
//			else x++;
		}
	}
	cout << "No Solution";
//	else cout << a[i] << " " << b[i] << " " << c[i] << " " << d[i];
}