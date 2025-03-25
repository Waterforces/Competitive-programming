#include<bits/stdc++.h>
using namespace std;
char s;
int a,b;

int main() {
    while(cin >> s) {
        if(s=='N') break ;
        if(s=='A') a++;
        else if(s=='B') b++;
    }
    if(a>b) cout << "A Win the election " << a << " : " << b; 
    else if(a==b) cout << "A and B Got " << a << "Equal score";
    else cout << "B Win the election " << a << " : " << b; 
}