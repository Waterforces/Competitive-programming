#include<bits/stdc++.h>
using namespace std;
int n,m;
string s[10005],tmp[10005];

int main() {
    cout << "Enter the value of n\n";
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> s[i];
        tmp[i]=s[i];
    }
    sort(s,s+n);
    cout << "----------------------------------------\nInput Names Sorted names----------------------------------------\n";
    for(int i=0;i<n;i++) {
        cout << tmp[i] << " " << s[i] << "\n";
    }
    cout << "----------------------------------------";
}   