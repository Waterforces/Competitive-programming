#include<bits/stdc++.h>
using namespace std;
int q,a[10][10];

int main() {
    for(int i=1;i<=9;i++) {
        for(int j=1;j<=9;j++) {
            cin >> a[i][j];
        }
    }
    cin >> q;
    while(q-->0) {
        int t,k,ch=0;
        cin >> t >> k;
        if(t==-1) {
            for(int i=1;i<=9;i++) {
                if(a[k][i]!=0) cout << a[k][i] << " "; 
                else ch++;
            }
            if(ch==9) cout << 0;
            cout << endl;
        }
        else if(t==1) {
            for(int i=1;i<=9;i++) {
                if(a[i][k]!=0) cout << a[i][k] << " ";
                else ch++;
            }
            // cout << ch;
            if(ch==9) cout << 0;
            cout << endl;
        }   
        else {
            int h[10]={0,1,1,1,4,4,4,7,7,7};
            int w[10]={0,1,4,7,1,4,7,1,4,7};
            for(int i=h[k];i<=h[k]+2;i++) {
                for(int j=w[k];j<=w[k]+2;j++) {
                    if(a[i][j]!=0) cout << a[i][j] << " ";
                    else ch++;
                }
            }
            if(ch==9) cout << 0;
            cout << endl;
        }
    }
}