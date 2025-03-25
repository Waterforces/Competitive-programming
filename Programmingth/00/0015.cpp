#include<bits/stdc++.h>
using namespace std;
int a,b,c;

int main() {
    cin >> a >> b >> c;
    int x=abs(a-b)-1;
    int y=abs(b-c)-1;
 //   int z=abs(b-c);
    int ans=max(x,y);
//    ans=max(ans,z);
    cout << ans;
}