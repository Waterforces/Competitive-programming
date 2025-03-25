#include<bits/stdc++.h>
using namespace std;
int n,k,ch,a[10005];
bool visited[10005];

int main() {
    cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    cin >> k;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(i==j || a[i]+a[j]!=k || visited[i] || visited[j]) continue ;
            visited[i]=visited[j]=ch=1;
            cout << a[i] << " " << a[j] << endl;
        }
    }
    if(ch==0) cout << "No";
}