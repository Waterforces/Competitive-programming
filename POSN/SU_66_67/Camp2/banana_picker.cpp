#include<bits/stdc++.h>
using namespace std;
const int N=1e6+5;
int a[N],l[N],r[N],n;
stack<int> st;
int main() {
    cin.tie()->sync_with_stdio(0);
    cin >> n;
    for(int i=1;i<=n;i++) cin >> a[i];
    for(int i=1;i<=n;i++) {
        while(!st.empty() && st.top()<=a[i]) st.pop();
        st.push(a[i]);
        l[i]=st.size();
    }
    for(int i=n;i>=1;i--) {
        while(!st.empty() && st.top()<=a[i]) st.pop();
        st.push(a[i]);
        r[i]=st.size();
    }
    int q;
    cin >> q;
    for(int i=0;i<q;i++) {
        int p;
        cin >> p;
        cout << l[p-1]+r[p+1] << " ";
    }
}