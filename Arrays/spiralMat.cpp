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

vector<vector<int> >generateMatrix(int A) {
    
    vector<vector<int>>mat(A,vector<int>(A,-1));
    
    int dirx[4]={0,1,0,-1};
    int diry[4]={1,0,-1,0};
    int cure=1;
    int curdir=0;
    int curx=0;
    int cury=0;
    
    for(int i=1;i<=A*A;i++){
        mat[curx][cury]=cure++;
        
        int nextx=curx+dirx[curdir];
        int nexty=cury+diry[curdir];
        
        if(nextx>=A || nextx<0 || nexty>=A || nexty<0 || mat[nextx][nexty]!=-1){
            curdir+=1,curdir%=4;
            nextx=curx+dirx[curdir];
            nexty=cury+diry[curdir];
        }

        curx=nextx,cury=nexty;
        
    }
    return mat;
    
}
 
 
int32_t main()
{
    fast_io;
    int t;
    generateMatrix(4);
}