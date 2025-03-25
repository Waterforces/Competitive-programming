#include<bits/stdc++.h>
using namespace std;
int n;
int main() {
    cin >> n;
    int a=((n*3)-2)%10;
    int b=n%10;
    int c=n%10+1;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n*2-1;j++) {
            if(j==n*2-1) {
                if(a<0) a=9;
                cout << a;
                a--;
            }
            else if(j==1) {
                if(b<0) b=9;
                cout << b;
                b--;
            }
            else if(j==2*(i-1)+1) {
                if(c>9) c=0;
                cout << c;
                c++;
            }
            else cout << " ";
        }
        cout << endl;
    }
}
