#include<bits/stdc++.h>
using namespace std;
#define lc "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(0)
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define int long long
#define c(a,n) for(int i = 0; i < n; i++) cin >> a[i];
#define ffor(n) for(int i = 0; i < n; i++)
 
typedef vector<int> vi;
typedef vector<float> vf;
typedef vector<vi> vii;
typedef vector<string> vs;
typedef vector<long long> vll;
typedef map<string,int> msi;
typedef map<int,int> mii;
typedef unordered_map<string,int> umsi;


vector<vector<int> > solve(int A) {
    if(A==0)return {};
    vector<vector<int>>res(A);
    
    res[0].push_back(1);
    for(int i=1;i<A;i++)
    {
        res[i].push_back(1);
        for(int j=1;j<i;j++)
        res[i].push_back(res[i-1][j]+res[i-1][j-1]);
        
        res[i].push_back(1);
    }
    return res;
}
 
 
int32_t main()
{
    fast_io;
    int t;
    cin >> t;
    while(t--)
    {
        
    }
    return 0;
}