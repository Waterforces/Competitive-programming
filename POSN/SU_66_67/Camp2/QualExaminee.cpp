#include<bits/stdc++.h>
using namespace std;
string s[10005];
int a[10005];
float avg;
int c,n;
vector<string> v;
int main() {
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> s[i] >> a[i];
        avg+=a[i];
    }
    avg/=n;
    for(int i=0;i<n;i++) {
        if(a[i]>=avg) {
            v.push_back(s[i]);
            c++;
        }
    }
    cout << c << endl;
    for(auto x: v) {
        cout << x << endl;
    }
}
