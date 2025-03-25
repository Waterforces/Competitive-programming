#include<bits/stdc++.h>
using namespace std;
int even,odd;
int main() {
    for(int i=0;i<8;i++) {
        int a;
        cin >> a;
        if(a%2==0) {
            even+=a;
        }
        else {
            odd+=a;
        }
    }
    if(odd>even) cout << "odd";
    else if(even>odd) cout << "even";
    else cout << "equal";
    cout << endl << even << endl << odd;
}