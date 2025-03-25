#include<bits/stdc++.h>
using namespace std;
long long n,m,val1,val2;
string s[7];

int check(string x) {
    // cout << "#:" << x << ":#" << "\n";
    if(x=="      |   | ") return 1;
    if(x==" _   _| |_  ") return 2;
    if(x==" _   _|  _| ") return 3;
    if(x=="    |_|   | ") return 4;
    if(x==" _  |_   _| ") return 5;
    if(x==" _  |_  |_| ") return 6;
    if(x==" _    |   | ") return 7;
    if(x==" _  |_| |_| ") return 8;
    if(x==" _  |_|  _| ") return 9;
    if(x==" _  | | |_| ") return 0;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> n >> m;
    cin.ignore();
    for(int i=1;i<=6;i++) {getline(cin,s[i]); s[i]+=" ";}
    for(int k=0;k<n;k++) {
        string q="";
        for(int i=1;i<=3;i++) {
            for(int j=0;j<4;j++) {
                q+=s[i][4*k+j];
                // cout << i << " " << 3*k+j << "\n";
            }
        }
        val1+=(check(q)*pow(10,n-k-1));
        // cout << check(q) << "\n";
    }
    // cout << val1 << "\n";
    for(int k=0;k<m;k++) {
        string q="";
        for(int i=4;i<=6;i++) {
            for(int j=0;j<4;j++) {
                q+=s[i][4*k+j];
            }
        }
        val2+=(check(q)*pow(10,m-k-1));
        // cout << check(q) << "\n";
    }
    // cout << val2;
    cout << val1+val2;
}