#include<bits/stdc++.h>
using namespace std;
int m,n;
int s1,s2;
int main() {
    cin >> m >> n;
    for(int i=0;2*i+1<=m;i++) {
        if(i%2==0) {
            s1+=(2*i+1);
        }
        else {
            s1-=(2*i+1);
        }
    }
    for(int i=0;pow(2,i)<=n;i++) {
        if(i%2==0) {
            s2+=pow(2,i);
        }
        else {
            s2-=pow(2,i);
        }
    }
    //cout << s1 << " " << s2 << endl;
    cout << s1*s2;
}
