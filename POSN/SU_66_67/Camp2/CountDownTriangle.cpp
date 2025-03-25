#include<bits/stdc++.h>
using namespace std;
int n;
int main() {
    cin >> n;
    for(int i=n;i>0;i--) {
        for(int j=n;j>i;j--) {
        //    if(n>9 && i<10) cout << " ";
            cout << " ";
        }
        for(int j=0;j<i;j++) {
            cout << i%10;
        }
        cout << endl;
    }
}
