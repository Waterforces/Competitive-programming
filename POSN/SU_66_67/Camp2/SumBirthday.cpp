#include<bits/stdc++.h>
using namespace std;
int d,m,y;
int main() {
    cin >> d >> m >> y;
    int sum=d/10+d%10+m/10+m%10+y/1000;
    y%=1000;
    sum+=y/100;
    y%=100;
    sum+=y/10;
    sum+=y%10;
    cout << sum;
    while(sum>=10) {
        int a=sum;
        sum=0;
        do {
            sum+=a%10;
            a/=10;
            //cout << a << endl;
        }
        while(a!=0);
        cout << " " << sum;
    }
}
