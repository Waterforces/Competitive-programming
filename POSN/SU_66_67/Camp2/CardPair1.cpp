#include<bits/stdc++.h>
using namespace std;
int main() {
    for(int i=0;i<5;i++) {
        char a[2],b[2];

        cin >> a[0] >> a[1] >> b[0] >> b[1];
        int s1=min(a[0],a[1]);
        int s2=min(b[0],b[1]);
        //cout << endl << s1 << " " << s2 << endl;
        if(s1<s2) cout << "W";
        else if(s1==s2) cout << "D";
        else cout << "L";
    }
}
