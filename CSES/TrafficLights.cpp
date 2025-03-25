#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
const int N = 2e5+5;
int n,m;
set<int> s;
multiset<int> ms;
 
int main() {
    cin >> n >> m;
    s.insert(0);
    s.insert(n);
    ms.insert(n-0);
    while(m--) {
        int a;
        cin >> a;
        s.insert(a);
        set<int>::iterator itr = s.find(a);
        int pV = *prev(itr), nV = *next(itr);
        ms.erase(ms.find(nV-pV));
        ms.insert(nV-a);
        ms.insert(a-pV);
        cout << *ms.rbegin() << " ";
    }
}