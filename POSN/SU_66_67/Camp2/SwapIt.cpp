#include<bits/stdc++.h>
using namespace std;
int a[9][9];
int n;
int _x[1000],_y[1000];
int h,v;
bool b[9][9];

void re()
{
    for(int i=1; i<=8; i++)
    {
        for(int j=1; j<=8; j++)
        {
            b[i][j]=0;
        }
    }
}

void dis()
{
    for(int i=1; i<=8; i++)
    {
        for(int j=1; j<=8; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void run(int x,int y,int z)
{

    if(x<=0 || y<=0 || x>8 || y>8) return ;
    int p=a[x][y];
    if(b[x][y]==1 || p!=z) return ;
    h++;
    b[x][y]=1;
    run(x,y+1,z);
    run(x,y-1,z);
}

void _v(int x,int y,int z)
{
    //cout << x << " " << y << " " << z << endl;
    if(x<=0 || y<=0 || x>8 || y>8) return ;
    int p=a[x][y];
    if(p!=z || b[x][y]==1) return ;
    //cout << v << endl;
    v++;
    b[x][y]=1;
    _v(x+1,y,z);
    _v(x-1,y,z);
}

int main()
{
    for(int i=1; i<=8; i++)
    {
        for(int j=1; j<=8; j++)
        {
            cin >> a[i][j];
        }
    }
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int x,y,z;
        cin >> _y[i] >> _x[i] >> z;
        x=_x[i];
        y=_y[i];
        if(z==0 && y-1>0)
        {
            int tmp=a[x][y];
            a[x][y]=a[x][y-1];
            a[x][y-1]=tmp;
            //cout << a[x][y] << " " << a[x-1][y] << endl;
        }

        else if(z==1 && x-1>0)
        {
            int tmp=a[x][y];
            a[x][y]=a[x-1][y];
            a[x-1][y]=tmp;
            //cout << a[x][y] << " " << a[x][y-1] << endl;
        }

        else if(z==2 && y+1<=8)
        {
            int tmp=a[x][y];
            a[x][y]=a[x][y+1];
            a[x][y+1]=tmp;
            //cout << a[x][y] << " " << a[x+1][y] << endl;
        }

        else if(z==3 &&x+1<=8)
        {
            int tmp=a[x][y];
            a[x][y]=a[x+1][y];
            a[x+1][y]=tmp;
            //cout << a[x][y] << " " << a[x][y+1] << endl;
        }
        h=v=0;
        re();
        run(_x[i],_y[i],a[_x[i]][_y[i]]);
        re();
        _v(_x[i],_y[i],a[_x[i]][_y[i]]);
        cout << "H " << h << " V " << v << endl;
    }
    //cout << endl;
    //dis();
 /*   for(int i=0; i<n; i++)
    {
        h=v=0;
        re();
        run(_x[i],_y[i],a[_x[i]][_y[i]]);
        re();
        _v(_x[i],_y[i],a[_x[i]][_y[i]]);
        if(i>0) cout << endl;
        cout << "H " << h << " V " << v;
    } */
}
