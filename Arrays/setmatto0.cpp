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

void setZeroes(vector<vector<int> > &mat) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=mat.size();
    int m=mat[0].size();
    bool p1=false;
    bool p2=false;
    for(int i=0;i<n;i++)
    {
        if(mat[i][0]==0){
            p1=true;
            break;
        }
    }
    for(int i=0;i<m;i++)
    {
        if(mat[0][i]==0){
            p2=true;
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0; j<m;j++)
        {
            if(mat[i][j]==0)
            {
                mat[0][j]=-1;
                mat[i][0]=-1;
            }
        }
    }
    for(int i=1;i<n;i++)
    {
    
        if(mat[i][0]==-1)
        for(int j=0;j<m;j++)
        mat[i][j]=0;
    }
    for(int i=1;i<m;i++)
    {

        if(mat[0][i]==-1)
        for(int j=0;j<n;j++)
        mat[j][i]=0;
    }
    if(p1)
    for(int i=0;i<n;i++)
    mat[i][0]=0;
    if(p2)
    for(int i=0;i<m;i++)
    mat[0][i]=0;
    
}
 
 
int32_t main()
{
   vii a={{0,0},{1,1}};
   setZeroes(a);

    return 0;
}