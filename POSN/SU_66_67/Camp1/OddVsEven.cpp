#include<bits/stdc++.h>
using namespace std;
int odd,even;

int main() {
    for(int i=0;i<8;i++) {
        int a;
        cin >> a;
        if(a%2==0) even+=a;
        else odd+=a;
    }
    if(even==odd) cout << "equal";
    else if(even>odd) cout << "even";
    else cout << "odd";
    cout << "\n" << even << "\n" << odd;
}