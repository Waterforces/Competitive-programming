#include<bits/stdc++.h>
using namespace std;
int n;
bool dfs(int x) {
	if(x==0) {
	//	cout << ans << endl;
		return true;
	}
	if(x<0) {
		return false;
	}
//	cout << 1
	return dfs(x-6) || dfs(x-9) || dfs(x-20);
}
int main() {
	cin >> n;
	if(n<6) {
		cout << "no";
		return 0;
	}
	for(int i=6;i<=n;i++) {
		if(dfs(i)==true) cout << i << endl;
	}
}