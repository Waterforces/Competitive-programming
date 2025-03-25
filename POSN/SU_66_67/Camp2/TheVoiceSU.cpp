#include<bits/stdc++.h>
using namespace std;
int m,f;
int n,k;

int main() {
    cin >> n >> k;
    m=f=k;
    for(int i=1;i<=n;i++) {
        int a,b,s;
        cin >> s >> a >> b;
        if(m==0 && f==0) {
            continue ;
        }
        if(a<9 && b<9) continue ;
        if(a>=9 && b>=9 && m!=0 && f!=0) {
            cout << i << " " << s << endl;
            if(s==1) m--;
            else f--;
            continue ;
        }
        if(a>=9) {
            if(m==0 && b<9) continue ;
            if(m==0) {
                cout << i << " " << 2 << endl;
                f--;
                continue ;
            }
            cout << i << " " << 1 << endl;
            m--;
            continue ;
        }
        if(b>=9) {
            if(f==0 && a<9) continue ;
            if(f==0) {
                cout << i << " " << 1 << endl;
                m--;
                continue ;
            }
            cout << i << " " << 2 << endl;
            f--;
            continue ;
        }
    }
}