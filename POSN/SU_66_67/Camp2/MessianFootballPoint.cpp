#include<bits/stdc++.h>
using namespace std;
char s;
int n;
int d,l,w;
int main() {
    cin >> n;
    for(int i=0;i<n;i++) {
        d=l=w=0;
        for(int j=0;j<38;j++) {
            cin >> s;
            if(s=='D') d++;
            else if(s=='L') l++;
            else w++;
        }
        cout << w << " " << d << " " << l << " ";
        int _n=w*3+d;
        int o=w*2+d;
        int m=w*5+d-l;
        cout << o << " " << _n << " " << m << endl;
    }
}
