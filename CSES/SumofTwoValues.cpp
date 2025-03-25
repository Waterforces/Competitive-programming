#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
const int N = 2e5+5;
int n,k;
pair<int,int> p[N];
 
int main() {
    cin >> n >> k;
    for(int i=0;i<n;i++) {
        int a;
        cin >> a;
        p[i]=make_pair(a,i);
    }
    sort(p,p+n);
    for(int i=0;i<n;i++) {
        int l=0,r=n-1;
        while(l<r) {
            int mid = (l+r)/2;
            if(p[i].first+p[mid].first<k) l=mid+1;
            else r=mid;
        }
        // cout << p[i].second << " " << p[l].second << endl;
        if(p[i].first+p[l].first==k && p[i].second!=p[l].second) {
            cout << p[i].second+1 << " " << p[l].second+1 << endl;
            return 0;
        }
    }
    cout << "IMPOSSIBLE";
}