#include<bits/stdc++.h>
using namespace std;
int n;
char s[1005];
int c=0,d;

int main() {
    cin >> n;
    for(int i=0;i<n;i++) cin >> s[i];
    for(int i=0;i<n;i++) {
        d=0;
        for(int j=0;j<n-1;j++) {
            if(s[j]>s[j+1]) {
                char tmp=s[j];
                s[j]=s[j+1];
                s[j+1]=tmp;
                d++;
                j++;
            }
        }
        if(d>0) c++;
    }
    cout << c;
}
