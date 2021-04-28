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

vector<int> getRow(int k) {
    if(k==0)return {1};
    if(k==1)return {1,1};
    vector<vector<int>>nextrow(2,vector<int>(k+1));
    int f=1;
    nextrow[0][0]=1;
    nextrow[0][1]=1;
    for(int i=2;i<=k;i++)
    {
        
        nextrow[f][0]=1;
        for(int j=1;j<i;j++)
        nextrow[f][j] = (nextrow[!f][j-1]+nextrow[!f][j]);
        nextrow[f][i]=1;
        
        f=!f;
    }
    return nextrow[!f];
    
}
 
 
int32_t main()
{
    fast_io;
    getRow(4);
}