#include<bits/stdc++.h>
using namespace std;
int ch[4][4]={{0,1,2,3},{1,0,3,2},{2,3,0,1},{3,2,1,0}};
int n,m;
string s;
unordered_map<string,int> mp;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> n >> m >> s;
    for(int i=1;i<=m;i++) {
        s+=s[0];
        // cout << s << endl;
        for(int j=0;j<n;j++) {
            int a=s[j]-'A',b=s[j+1]-'A';
            // cout << j << " : " << b << s[j+1] << " "<< s[b] << " " << s[0] << endl;
            s[j]=ch[a][b]+'A';
        }
        s.pop_back();
        auto it = mp.find(s);
        if(it!=mp.end()) {
            int idx=(i-mp[s]);
            int t=(m-mp[s])/idx;
            i=t*idx+mp[s];
            // cout << i << " " << t << " " << idx << " " << mp[s] << endl; 
        }
        else mp[s]=i;
        // cout << i << " " << s << endl;
    }
    cout << s;
}

/*
6 90
CBADDA

1 DBDADC
2 CCDDBB
3 ABACAD
4 BBCCDD
5 ADABAC
6 DDBBCC
7 ACADAB
8 CCDDBB
9 ABACAD
10 BBCCDD
11 ADABAC
12 DDBBCC
13 ACADAB
14 CCDDBB
15 ABACAD
16 BBCCDD
17 ADABAC
18 DDBBCC
19 ACADAB
20 CCDDBB
21 ABACAD
22 BBCCDD
23 ADABAC
24 DDBBCC
25 ACADAB
26 CCDDBB
27 ABACAD
28 BBCCDD
29 ADABAC
30 DDBBCC
31 ACADAB
32 CCDDBB
33 ABACAD
34 BBCCDD
35 ADABAC
36 DDBBCC
37 ACADAB
38 CCDDBB
39 ABACAD
40 BBCCDD
41 ADABAC
42 DDBBCC
43 ACADAB
44 CCDDBB
45 ABACAD
46 BBCCDD
47 ADABAC
48 DDBBCC
49 ACADAB
50 CCDDBB
51 ABACAD
52 BBCCDD
53 ADABAC
54 DDBBCC
55 ACADAB
56 CCDDBB
57 ABACAD
58 BBCCDD
59 ADABAC
60 DDBBCC
61 ACADAB
62 CCDDBB
63 ABACAD
64 BBCCDD
65 ADABAC
66 DDBBCC
67 ACADAB
68 CCDDBB
69 ABACAD
70 BBCCDD
71 ADABAC
72 DDBBCC
73 ACADAB
74 CCDDBB
75 ABACAD
76 BBCCDD
77 ADABAC
78 DDBBCC
79 ACADAB
80 CCDDBB
81 ABACAD
82 BBCCDD
83 ADABAC
84 DDBBCC
85 ACADAB
86 CCDDBB
87 ABACAD
88 BBCCDD
89 ADABAC
90 DDBBCC
*/

/*
0 : 1
1 : 2
2 : 3
3 : 0
0 : 3
1 : 1
2 : 3
3 : 1
0 : 2
1 : 2
2 : 2
3 : 2
0 : 0
1 : 0
2 : 0
3 : 0
AAAA

0 : 1B B
1 : 2C C
2 : 3D D
3 : 1A D
0 : 3D C
1 : 1B D
2 : 2C B
3 : 2B D
0 : 2C D
1 : 3D A
2 : 0A A
3 : 0C A
0 : 1B B
1 : 3D A
2 : 0A B
3 : 1A C
0 : 2C D
1 : 3D B
2 : 1B B
3 : 3B B
0 : 1B B
1 : 2C C
2 : 2C C
3 : 2D A
0 : 3D A
1 : 0A B
2 : 0A B
3 : 1C D
BDAB
*/

/*

*/