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
//sum approach is better 
//too lazy to code that

vector<int> repeatedNumber(const vector<int> &A) {
    vector<int>res(2);
    vector<bool>vis(A.size(),false);
    for(int i=0;i<A.size();i++)
    {
        if(vis[A[i]-1])res[0]=A[i];
        else vis[A[i]-1]=true;
    }
    for(int i=0;i<A.size();i++)
    if(!vis[i])res[1]=i+1;
    
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