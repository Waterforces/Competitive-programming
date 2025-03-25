#include<bits/stdc++.h>
using namespace std;
int a[10],num[10];

int main() {
    for(int I=0;I<6;I++) {
        string s;
        cin >> s;
        for(int i=0;i<s.size();i++) a[s[i]-'0']++;
    }
    copy(a,a+10,num);
    sort(a,a+10,greater<int>());
    for(int i=0;i<10;i++) {
        for(int j=0;j<10;j++) {
            if(num[j]==a[i]) {
                cout << j << " = " << num[j] << "\n";
                num[j]=11;
                break ;
            }
        }
    }
}