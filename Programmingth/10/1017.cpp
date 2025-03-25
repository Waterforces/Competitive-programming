#include<bits/stdc++.h>
using namespace std;
int n;
int a[10][10];
int sum,ans;
bool b[10005];

void run(int x,int y,char s) {
//    cout << sum <<endl;
    if(x<0 || y<0 || x>=n || y>=n) return ;
    if(s=='d') {
        sum+=a[x][y];
        run(x+1,y+1,s);
    }
    else if(s=='l') {
        sum+=a[x][y];
        run(x+1,y,s);
    }
    else if(s=='a') {
        sum+=a[x][y];
        run(x+1,y-1,s);
    }
    else {
        sum+=a[x][y];
        run(x,y+1,s);
    }
}

int main() {
    cin >> n;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin >> a[i][j];
            if(b[a[i][j]]==0) {
                b[a[i][j]]=1;
            }
            else {
                cout << "No";
                return 0;
            }
        }
    }
    run(0,0,'d');
    ans=sum;
    sum=0;
    run(0,n-1,'a');
    if(ans!=sum)
    {
        cout << "No";
        return 0;
    }
    for(int i=0;i<n;i++) {
        sum=0;
        run(0,i,'l');
        if(ans==sum) continue ;
        cout << "No";
        return 0;
    }
    for(int i=0;i<n;i++) {
        sum=0;
        run(i,0,'r');
        if(ans==sum) continue ;
        cout << "No";
        return 0;
    }
    cout << "Yes";
}