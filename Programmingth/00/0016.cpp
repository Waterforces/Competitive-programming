#include<bits/stdc++.h>
using namespace std;
char _a[3]={'A','B','C'};
char _b[4]={'B','A','B','C'};
char _c[6]={'C','C','A','A','B','B'};
int a,b,c;
int A,B,C;
int _max=INT_MIN;

int main() {
    int n;
    cin >> n;
    char s;
    for(int i=0;i<n;i++,A++,B++,C++) {
        cin >> s;
        if(A>=3) A=0;
        if(B>=4) B=0;
        if(C>=6) C=0;
        if(s==_a[A]) {
      //      cout << s << endl;
            a++;
        }
        if(s==_b[B]) {
     //       cout << s << endl;
            b++;
       //     cout << b << endl;
        }
        if(s==_c[C]) {
      //      cout << s << endl;
            c++;
        }
    }
//    cout << a << " " << b << "  " << c << endl;
/*    a/=3;
    b/=4;
    c/=6; */
    if(_max<a) _max=a;
    if(_max<b) _max=b;
    if(_max<c) _max=c;

 //   cout << a << " " << b << "  " << c << endl;
    cout << _max << endl;
    if(_max==a) cout << "Adrian\n";
    if(_max==b) cout << "Bruno\n";
    if(_max==c) cout << "Goran";
}