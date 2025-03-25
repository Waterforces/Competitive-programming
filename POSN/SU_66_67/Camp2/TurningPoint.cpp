#include<bits/stdc++.h>
using namespace std;
long long  x,y,a=1,up=0,down=0;
int main() {
    scanf("%lld %lld",&x,&y);
    while(true) {
        scanf("%lld",&a);
        if(a==0) {
            //cout << down << endl << up;
            break ;
        }
        if(x<y && y>a) {
            up++;
        }
        if(x>y && y<a) {
            down++;
        }
        x=y;
        y=a;
    }
      printf("%lld\n%lld",up,down);
}
