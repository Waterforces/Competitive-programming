#include<bits/stdc++.h>
using namespace std;
double ans,n,x[105],y[105];

int main() {
    cin >> n;
    for(int i=0;i<n;i++) cin >> x[i] >> y[i];
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            for(int k=j+1;k<n;k++) {
                double area=abs((x[i]*y[j] + x[j]*y[k] + x[k]*y[i])-(y[i]*x[j] + y[j]*x[k] + y[k]*x[i]))/2;
                ans=max(ans,area);
            }
        }
    }
    cout << fixed << setprecision(3) << ans;
}