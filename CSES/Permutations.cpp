#include<bits/stdc++.h>
using namespace std;
string s;
int n;
 
int main() {
    cin >> n;
    if(n<=3 && n!=1) cout << "NO SOLUTION";
    else {
        for(int i=1;i<=n;i++) {
            if(i%2==0) cout << i << " ";
            else s+=to_string(i) + " ";
        }
        cout << s;
    }
}