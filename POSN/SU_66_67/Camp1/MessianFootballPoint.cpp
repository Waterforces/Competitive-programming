#include<bits/stdc++.h>
using namespace std;
int n;

int main() {
    cin >> n;
    for(int I=0;I<n;I++) {
        int win=0,lose=0,draw=0,old=0,now=0,messi=0;
        string s;
        cin >> s;
        for(int i=0;i<s.size();i++) {
            if(s[i]=='W') {
                win++;
                old+=2;
                now+=3;
                messi+=5;
            }
            else if(s[i]=='L') {
                lose++;
                messi--;
            }
            else {
                draw++;
                old++;
                now++;
                messi++;
            }
        }
        cout << win << " " << draw << " " << lose << " " << old << " " << now << " " << messi << "\n";
    }
}