#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[1005];
int s,m,c=1;
int main() {
    cin >> k >> n;
    int m=100*k;
    for(int i=0;i<n;i++) {
        int a;
        cin >> a;
        s+=a;
        while(s>0) {
            if(m<=0) {
                m=100*k+m;
                c++;
            }
            if(s>m) {
                s-=m;
                m-=m;
            }
            else {
                m-=s;
                s-=s;
            }
        }
        cout << c << endl;
    }
}
