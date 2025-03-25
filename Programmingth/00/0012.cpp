/*
Task: 0012
*/
#include<bits/stdc++.h>
using namespace std;
string s;

int main() {
    cin >> s;
    int ss = s.size();
    for(int i=1;i<=5;i++) {
        for(int j=1;j<=ss*4+1;j++) {
            if(i==1 || i==5) {
                if((j+1)%4==0 && (j+1)%3==0) cout << "*";
                else if((j+1)%4==0) cout << "#";
                else cout << ".";
            }
            else if(i==2 || i==4) {
                if(j%12==0 || (j+2)%12==0) cout << "*";
                else if(j%2==0) cout << "#";
                else cout << ".";
            } 
            else {
                if((j+1)%4==0) cout << s[(j+1)/4-1];
                else if(((j+3)%6==0 && j!=1) || ((j-1)%6==0) && j!=1) cout << "*";
                else if(j%2==1) cout << "#";
                else cout << ".";
            }
        }
        cout << "\n";
    }
}