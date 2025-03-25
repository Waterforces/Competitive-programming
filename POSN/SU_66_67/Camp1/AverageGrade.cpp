#include<bits/stdc++.h>
using namespace std;
int a,b,c,d;
double sum;

int main() {
    cin >> a >> b >> c >> d;
    for(int i=0;i<8;i++) {
        int n;
        cin >> n;
        if(n>=a) {
            cout << 4 << "\n";
            sum+=4;
        }
        else if(n>=b) {
            cout << 3 << "\n";
            sum+=3;
        }
        else if(n>=c) {
            cout << 2 << "\n";
            sum+=2;
        }
        else if(n>=d) {
            cout << 1 << "\n";
            sum+=1;
        }
        else {
            cout << 0 << "\n";
        }
    }
    cout << fixed << setprecision(6) << sum/8;
}