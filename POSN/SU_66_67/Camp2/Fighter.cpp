#include<bits/stdc++.h>
using namespace std;
int n;
int s1,s2;
int c,d,k;
int main() {
    cin >> n;
    s1=s2=n;
    for(int i=0;i<n*2;i++) {
        int a;
        cin >> a;
        if(a%2==0) {
            d=0;
            c++;
            if(c>=3) {
                s1-=3;
            }
            else {
                s1-=1;
            }
        }
        else {
            c=0;
            d++;
            if(d>=3) {
                s2-=3;
            }
            else {
                s2-=1;
            }
        }
        //cout << s1 << " " << s2 << " " << k<< endl;
        if(s1<=0 || s2<=0) {
            k=a;

            break ;
        }
    }
    if(s1>s2) {
        cout << 1 << endl << k;
    }
    else {
        cout << 0 << endl << k;
    }
}
