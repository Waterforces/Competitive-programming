#include<bits/stdc++.h>
using namespace std;
int main() {
    int a=0;
    cin >> a;
    do {

        for(int i=1;i<a;i++) {
            if(i%5==0) cout << "X";
            else cout << "*";
        }
        cout << a%10;
        cout << endl;
        cin >> a;
    }
    while(a>0);
//bargarph

}
