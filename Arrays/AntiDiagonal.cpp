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


vector<int>getDigonal(int i,int j,vector<vector<int> > &A)
{
    vector<int>res;
    int n=A.size();
    while(i<n && j>=0)
    {
        res.push_back(A[i][j]);
        i++;j--;
    }
    return res;
}

vector<vector<int> >diagonal(vector<vector<int> > &A) {
    
    vector<vector<int>>res;
    int s=0;
    int n=A.size();
    for(int i=0;i<n;i++)
    {
        res.push_back(getDigonal(0,i,A));
    }
    for(int j=1;j<n;j++)
    {
        res.push_back(getDigonal(j,n-1,A));
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