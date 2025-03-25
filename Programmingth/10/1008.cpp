#include<bits/stdc++.h>
using namespace std;
int n;
int a[2505];
int _min=2501,_max;

void display()
{
    for(int i=_min;i<=_max+1;++i)
    {
        cout << a[i] << " ";
    }cout << endl;
}

void dis() {
    int k=a[_min],c=0;
    cout << _min << " ";
    for(int i=_min;i<=_max+1;i++) {
        if(k==a[i]) {
            continue ;
        }
        else {
            cout << k << " " << i << " ";
            k=a[i];
        }
    }
    cout << 0;
    return ;
}

void run(int l,int h,int r) {
    for(int i=l;i<r;i++) {
        a[i]=max(a[i],h);
    }
}

int main() {
    cin.tie()->sync_with_stdio();
    cin >> n;
    for(int i=0;i<n;i++) {
        int l,h,r;
        cin >> l >> h >> r;
        _min=min(l,_min);
        _max=max(r,_max);
        run(l,h,r);
    }
   // display();
    dis();
}