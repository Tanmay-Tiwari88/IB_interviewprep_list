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

int firstMissingPositive(vector<int> &A) {
    int maxel=*max_element(A.begin(),A.end());
    vector<bool>vis(maxel+1,false);
    for(auto i:A){
        if(i>0)
        vis[i]=true;
    }
    int curel=1;
    while(true){
        if(!vis[curel])return curel;
        curel+=1;
    }
    return -1;
    
}
 
 
int32_t main()
{
    fast_io;
N
    return 0;
}