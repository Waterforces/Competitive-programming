#include<bits/stdc++.h>
using namespace std;
int n,m,c;
string s[50000];
string ch[20];

void run(int x) {
    for(int i=0;i<m;i++) {
        if(s[x][3]==ch[i][0] && s[x][4]==ch[i][1] && s[x][5]==ch[i][2]) {
            c++;
            return ;
        }
    }
}

int main() {
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> s[i];
    }
    cin >> m;
    for(int i=0;i<m;i++) {
        cin >> ch[i];
    }
    for(int i=0;i<n;i++) {
        run(i);
    }
    cout << c;
}
