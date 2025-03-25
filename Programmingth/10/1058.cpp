#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;
const int N = 1e3 + 5;
int k;
int n, m;
char s[N][N];
pair<int, int> dp1[N][N], dp2[N][N];
int c = 1, _max1, _max2,ans;

void re() {
    for(int i=0;i<n+1;i++) {
        for(int j=0;j<m+1;j++) {
            dp1[i][j]={0,0};
            dp2[i][j]={0,0};
        }
    }
}

void dis()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << dp1[i][j].f << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << dp1[i][j].s << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << dp2[i][j].f << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << dp2[i][j].s << " ";
        }
        cout << endl;
    }

    cout << endl;
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    cin >> k;
    for (int I = 0; I < k; I++)
    {
        //        pair<int,int> dp1[N][N],dp2[N][N];
        _max1 = _max2 = ans = 0;
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
        {
            c = 1;
            for (int j = 1; j <= m; j++)
            {
                cin >> s[i][j];
                if (s[i][j] == '0')
                {
                    c = 1;
                    continue;
                }
                dp1[i][j].f = c;
                c++;
            }
        }
        // cout << "HELLO\n";
        for (int i = 1; i <= m; i++)
        {
            c = 1;
            for (int j = 1; j <= n; j++)
            {

                if (s[j][i] == '0')
                {
                    c = 1;
                    continue;
                }
                dp1[j][i].s = c;
                // cout << dp1[i][j].s << " " << j << " " << i << endl;
                c++;
            }
        }
        // cout << endl;
        for(int i=m;i>0;i--) {
            c=1;
            for(int j=n;j>0;j--) {
                // cout << i << " " << j << " " << s[i][j] << endl;
                if (s[j][i] == '0')
                {
                    c = 1;
                    continue;
                }
                dp2[j][i].f=c;
                c++;
            }
        }

        for(int i=n;i>0;i--) {
            c=1;
            for(int j=m;j>0;j--) {
                if (s[i][j] == '0')
                {
                    c = 1;
                    continue;
                }
                dp2[i][j].s=c;
                c++;
            }
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                _max1 = max(dp1[i][j].f, dp2[i][j].s);
                _max2 = max(dp1[i][j].s, dp2[i][j].f);
                int _sum=_max1+_max2;
                ans=max(ans,_sum);
            }
        }
        cout << ans-1 << endl;
        // dis();
        re();
    }
}