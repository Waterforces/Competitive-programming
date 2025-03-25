#include<bits/stdc++.h>
using namespace std;
stack<int> st;
int n;

int main() {
    cin >> n;
    for(int i=0;i<n;i++) {
        int a;
        cin >> a;
        st.push(a);
    }
    cout << st.top();
}