#include<bits/stdc++.h>
#define m 100000
using namespace std;
bool b[m];
int _min=INT_MAX;

void _set() {
    for(int i=2;i<m;i++) {
        if(b[i]==0) {
            for(int j=i*2;j<m;j+=i) {
                b[j]=1;
            }
        }
    }
}

void dis() {
    for(int i=2;i<m;i++) {
        cout << i << " = " << b[i] << endl;
    }
}

void run(int x) {
    _min=INT_MAX;
    if(x==1) {
        cout << 6 << endl;
        return ;
    }
    for(int i=2;i<=m;i++) {
        //cout << "i = " << i << endl;
        if(b[i]) continue ;
        for(int j=2;j*j<=m;j++) {
            //cout << "j = " << j << endl;
            if(b[j]) continue ;
            if(j==i) continue ;
            int k=i*j;
            if(k>=x) {
                //if(!b[i] && !b[j])
                _min=min(_min,k);
            }
        }
    }
    cout << _min << endl;
}

void input() {
    int n;
    cin >> n;
    for(int i=0;i<n;i++) {
        int a;
        cin >> a;
        run(a);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    b[0]=b[1]=1;
    _set();
    //dis();
    input();
}
