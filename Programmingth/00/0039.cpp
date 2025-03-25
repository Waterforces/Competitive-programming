#include<bits/stdc++.h>
using namespace std;
int n,m,a[9],num[8]={1,2,3,4,5,6,7,8};

int main() {
    cin >> n >> m;
    for(int i=0;i<m;i++) cin >> a[i];
    do {
        bool check=0;
        for(int i=0;i<m;i++) {
            if(a[i]!=num[0]) continue ;
            check=1;
            break ;
        }
        if(check) continue ;
        for(int i=0;i<n;i++) cout << num[i] << " ";
        cout << "\n";
    }
    while(next_permutation(num,num+n));
}