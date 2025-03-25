#include<bits/stdc++.h>
using namespace std;
int n,com[12],ans;
string s;

int main() {
    cin >> n >> s;
    for(int i=0;i<n;i++) {
        int num_char=s[i]-'A',permu=1;
        for(int j=num_char+1;j<n;j++) com[j]++;
        num_char-=com[num_char];
        for(int j=i+1;j<n;j++) {
            permu*=(n-j);
        }  
        // cout << num_char << endl;
        // cout << permu << " --- " << num_char*permu << endl;
        if((num_char*permu)>0) ans+=(num_char*permu);
        // for(int j=0;j<12;j++) cout << com[j] << " ";
        // cout << endl;
    }
    cout << ans+1 << endl;
}
