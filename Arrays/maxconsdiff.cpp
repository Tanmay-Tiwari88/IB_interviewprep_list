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
int maximumGap(const vector<int> &A) {
    //nlogn soln - not optimal
     if(A.size()<2)return 0;
    priority_queue<int>q;
    for(auto i:A)q.push(i);
    
    int first=q.top();q.pop();
    int maxdiff=-1;
    while(!q.empty()){

        maxdiff=max(maxdiff,abs(q.top()-first));
        first=q.top();
        q.pop();
    }
    return maxdiff;
    //best soln- range bucket approach must see

    int mx=INT_MIN,mi=INT_MAX;
   int n=A.size();
   if(n<=1)return 0;
   for(auto i:A)
   {
       mx=max(mx,i);
       mi=min(mi,i);
   }
   vector<int>maxbuc(n,INT_MIN);
   vector<int>minbuc(n,INT_MAX);
   double expgap=1.0*(mx-mi)/(n-1);
   
   for(auto i:A)
   {
       if(i==mi || i==mx)continue;
       int bucin=(i-mi)/expgap;
       
       maxbuc[bucin]=max(maxbuc[bucin],i);
       minbuc[bucin]=min(minbuc[bucin],i);
   }
   int prev=mi;
   int ans=INT_MIN;
   for(int i=0;i<n;i++)
   {
       if(minbuc[i]==INT_MAX)continue;
       ans=max(ans,minbuc[i]-prev);
       prev=maxbuc[i];
       
   }
   ans=max(ans,mx-prev);
   return ans;
    
    
}
 
 
int32_t main()
{
    fast_io;
   vi a ={1,10,5};
   cout<<maximumGap(a);
}