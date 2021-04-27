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
//study Better Approach
int maximumGap(const vector<int> &A) {
    
    vector<pair<int,int>>a;
    for(int i=0;i<A.size();i++)a.push_back({A[i],i});
    sort(a.begin(),a.end());
    int n=a.size();
    int maxi=INT_MIN;
    int ans=INT_MIN;
    for(int i=n-1;i>=0;i--)
    {
        maxi=max(maxi,a[i].second);
        ans=max(ans,maxi-a[i].second);
    }
    return ans;
    
}
 
 
int32_t main(){
    vi a={1,10};
    cout<<maximumGap(a);
}