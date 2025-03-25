#include<bits/stdc++.h>
using namespace std;
int n;
string s;
double x,y,dist,k;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    while(cin >> n) {
        cin >> s;
        if(s=="N") {
            y+=n;
        }
        else if(s=="E") {
            x+=n;
        }
        else if(s=="S") {
            y-=n;
        }
        else if(s=="W") {
            x-=n;
        }
        else if(s=="NE") {
            k=double(n)/sqrt(2);
            y+=k;
            x+=k;
        }
        else if(s=="SE") {
            k=double(n)/sqrt(2);
            y-=k;
            x+=k;
        }
        else if(s=="SW") {
            k=double(n)/sqrt(2);
            y-=k;
            x-=k;
        }
        else if(s=="NW") {
            k=double(n)/sqrt(2);
            y+=k;
            x-=k;
        }
        // cout << x << " " << y << "\n";
    }
    printf("%.3lf %.3lf\n%.3lf",x,y,sqrt(x*x+y*y));
}