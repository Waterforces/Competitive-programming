#include<bits/stdc++.h>
using namespace std;
int n,m;
bool b[1005];
int c;

void run() {
    for(int i=2;i<=n;i++) {
        if(b[i]==0) {
            for(int j=i;j<=n;j+=i) {
                if(j%i==0 && b[j]==0) {
                    b[j]=1;
                //    cout << j << endl;
                    c++;
                }
                if(c==m) {
                    cout << j << endl;
                    return ;
                }
            }
        }
    }
}

int main() {
    cin >> n >> m;
    run();
}