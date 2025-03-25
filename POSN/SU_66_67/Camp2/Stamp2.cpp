#include<bits/stdc++.h>
using namespace std;
string s1,s2,s3;
int o1,o2,o3,k1,k2,k3;
int a,sum,ans,stp,n,m;
string s;

int main() {
    cin >> s1 >> o1 >> k1;
    cin >> s2 >> o2 >> k2;
    cin >> s3 >> o3 >> k3;
    cin >> n >> m;
    for(int i=0;i<n;i++) {
        cin >> s >> a;
        ans+=a;
        if(s==s1) {
            if(o1==1) {
                stp+=k1;
            }
            else {
                ans-=k1;
            }
        }
        else if(s==s2) {
            if(o2==1) {
                stp+=k2;
            }
            else {
                ans-=k2;
            }
        }
        else if(s==s3) {
            if(o3==1) {
                stp+=k3;
            }
            else {
                ans-=k3;
            }
        }
        else sum+=a;
        //cout << stp << endl;
    }
    cout << ans << endl << sum << endl << sum/m+stp;
}
