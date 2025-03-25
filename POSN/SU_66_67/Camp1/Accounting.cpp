#include<bits/stdc++.h>
using namespace std;
int n,income,outcome,in,out;

int main() {
    while(cin >> n) {
        int a;
        if(n==0) break ;
        else if(n==1) {
            cin >> a;
            income+=a;
            in++;
        }
        else {
            cin >> a;
            outcome+=a;
            out++;
        }
    }
    cout << in << " " << out << "\n";
    cout << income << " " << outcome << " " << income-outcome; 
}