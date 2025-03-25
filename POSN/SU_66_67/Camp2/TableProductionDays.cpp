#include<bits/stdc++.h>
using namespace std;
int a,b,n,m,c,d;
int main() {
    cin >> a >> b >> n >> m;
    if((a==0 && n!=0) || (b==0 && m!=0)) {
        cout << "Unable to finish order";
        return 0;
    }
    int s1=a*6;
    int s2=b*10;
    while(true) {
        if(n<=0 && m<=0) {
            break ;
        }
        if(n>0) {
            n-=s1;
            c++;
        }
        if(m>0) {
            m-=s2;
            d++;
        }
    }
    cout << max(c,d);
}