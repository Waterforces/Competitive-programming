#include<bits/stdc++.h>
using namespace std;
int t[4],cou[4];

int main() {
    int n;
    cin >> n;
    for(int I=0;I<n;I++) {
        int a,b,c;
        cin >> a >> b >> c;
        if(a<=15 && b<=10 && c<=8) {
            cout << 1 << "\n";
            t[1]+=1200-(a*b*c); cou[1]++;
        }
        else if(a<=25 && b<=15 && c<=12) {
            cout << 2 << "\n";
            t[2]+=4500-(a*b*c); cou[2]++;
        }
        else if(a<=50 && b<=40 && c<=20) {
            cout << 3 << "\n";
            t[3]+=40000-(a*b*c); cou[3]++;
        }
        else cout << "Oversize product\n";
    }
    for(int i=1;i<=3;i++) { 
        cout << cou[i] << " " << t[i] << "\n";
    }
}