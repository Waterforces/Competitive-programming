#include<bits/stdc++.h>
using namespace std;
int x,y;
int c;
int main() {
    cin >> x >> y;
    for(int i=0;i<8;i++) {
        int a;
        cin >> a;
        if((a>=x && y>=a) || (a<=x && y<=a)) {
         //   cout << endl << a << endl;
            c++;
        }
    }
    if(c==0) cout << "None";
    else cout << c;
}
