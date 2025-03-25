#include<bits/stdc++.h>
using namespace std;
stack<int> st;
int n;

int main() {
    cin >> n;
    for(int i=0;i<n;i++) {
        string s;
        cin >> s;
        if(s=="Push") {
            int a;
            cin >> a;
            st.push(a);
        }
        else {
            cout << st.top();
            st.pop();
        }
    }
}