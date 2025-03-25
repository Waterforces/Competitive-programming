#include<bits/stdc++.h>
using namespace std;
int n,m,pro,loss;

int main() {
    cin >> n >> m;
    for(int i=0;i<n;i++) {
        int a,b;
        cin >> a >> b;
        pro+=a;
        loss+=b;
    }
    // cout << pro << " " << loss << " " << m/2 << "\n";
    if(pro-loss>=m) cout << "Profit " << pro-loss << "\n" << "Expand";
    else if(pro-loss<m/2 && pro-loss>0) cout << "Profit " << pro-loss << "\n" << "Not expand";
    else if(pro-loss<m/2 && pro-loss==0) cout << "Breakeven\nNot expand";
    else if(pro-loss<m/2) cout << "Loss " << loss-pro << "\n" << "Not expand";
    else {
        cout << "Profit " << pro-loss << "\n" << "Wait and see\n";
        pro=loss=0;
        for(int i=0;i<n;i++) {
            int a,b;
            cin >> a >> b;
            pro+=a;
            loss+=b;
        }
        if(pro-loss>=m) cout << "Profit " << pro-loss << "\n" << "Expand";
        else if(pro-loss>0) cout << "Profit " << pro-loss << "\n" << "Not expand";
        else if(pro-loss==0) cout << "Breakeven\nNot expand";
        else cout << "Loss " << loss-pro << "\n" << "Not expand";
    }
}