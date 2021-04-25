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
 

 vector<int> nextPermutation(vector<int> &A) {
    if(A.size()==1)
    return A;
    int i;
    for( i=A.size()-1; i>0 ; i--)
        if(A[i]>A[i-1])break;
    i--;
    if(i==-1)
    {
        sort(A.begin(),A.end());
        return A;
    }
    
    
    reverse(A.begin()+i+1,A.end());
    auto it=upper_bound(A.begin()+i+1,A.end(),A[i]);
    swap(A[i],A[it-A.begin()]);
    return A;
}
 
int32_t main()
{
    fast_io;
    vi A={839, 776, 843, 422, 252, 385, 543, 94, 711, 636, 517, 257, 222 };
    nextPermutation(A);
    return 0;
}