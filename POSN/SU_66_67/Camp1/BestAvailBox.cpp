#include<bits/stdc++.h>
using namespace std;
int n,t[4];

int main() {
    cin >> n;
    cin >> t[1] >> t[2] >> t[3];
    for(int I=0;I<n;I++) {
        int a,b,c;
        cin >> a >> b >> c;
        if(a<=15 && b<=10 && c<=8) {
            if(t[1]-1<0) {
                if(t[2]-1<0) {
                    if(t[3]-1<0) cout << "Box not available\n";
                    else {
                        cout << 3 << "\n";
                        t[3]--;
                    }
                }
                else {
                    cout << 2 << "\n";
                    t[2]--;
                }
            } 
            else {
                cout << 1 << "\n";
                t[1]--;
            }
        }
        else if(a<=25 && b<=15 && c<=12) {
            if(t[2]-1<0) {
                if(t[3]-1<0) cout << "Box not available\n";
                else {
                    cout << 3 << "\n";
                    t[3]--;
                }
            }
            else {
                cout << 2 << "\n";
                t[2]--;
            }
        }
        else if(a<=50 && b<=40 && c<=20) {
            if(t[3]-1<0) cout << "Box not available\n";
            else {
                cout << 3 << "\n";
                t[3]--;
            }
        }
        else cout << "Oversize product\n";
    }
}