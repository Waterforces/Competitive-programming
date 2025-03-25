#include<bits/stdc++.h>
using namespace std;
typedef struct node{
    int val,p1,p2;
}node ;
int a[1000][1000];
int c,n,d;
vector<node> v;
void run(int x,int y)
{
    if(a[x][y]>a[x+1][y]) c++;
    if(a[x][y]>a[x][y+1]) c++;
    if(a[x][y]>a[x-1][y]) c++;
    if(a[x][y]>a[x][y-1]) c++;
    if(a[x][y]>a[x+1][y-1]) c++;
    if(a[x][y]>a[x-1][y-1]) c++;
    if(a[x][y]>a[x+1][y+1]) c++;
    if(a[x][y]>a[x-1][y+1]) c++;
}

int main()
{
    cin >> n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i=1; i<n-1; i++)
    {
        for(int j=1; j<n-1; j++)
        {
            c=0;
            run(i,j);
            if(c==8)
            {
                v.push_back({a[i][j],i,j});
                d++;
            }

        }
    }
    cout << d << endl;
    for(int i=0;i<v.size();i++) {
        cout << v[i].val << " " << v[i].p1 << " " << v[i].p2 << endl ;
    }
}
