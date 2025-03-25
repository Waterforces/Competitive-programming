#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll n;
string s[11]={"* * * * * * * *","* * * * * * * *","                 ","-----------------","                 ","* * * * * * * *","* * * * * * * *","* * * * * * * *","* * * * * * * *","* * * * * * * *"};

int main() {
    cin >> n;
    if(n==1) {
        cout << "* * * * * * * *\n";
        cout << "* * * * * * * *\n";
        cout << "\n";
        cout << "-----------------\n";
        cout << "            *\n";
        cout << "* * * * * * *\n";
        cout << "* * * * * * * *\n";
        cout << "* * * * * * * *\n";
        cout << "* * * * * * * *\n";
        cout << "* * * * * * * *\n";
        return 0;
    } 
    for(int i=0;i<=8;i++) {
        const int N = pow(10,i);
        int t = (n/N)%10;
        if(t>=5) {
            t = (n/N)%10-5;
            for(int j=2;j>=1;j--) {
                // cout << 14-(i*2) << " " << j << " " << s[j][14-(i*2)] << endl;
                if(j==1) s[j][14-(i*2)]=' ';
                else s[j][14-(i*2)]='*';
            }
        }
        if(t>=1) {
            // cout << t <<  " " << n << endl;
            for(int j=4;j<=4+t;j++) {
                if(j==4+t) s[j][14-(i*2)]=' ';
                else s[j][14-(i*2)]='*';
                // cout << 14-(i*2) << " " << j << endl;
            }
        }
    }

    for(int i=0;i<10;i++) {
        cout << s[i] << endl;
    }  
}
                 