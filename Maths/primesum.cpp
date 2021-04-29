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

bool isprime(int x)
{
    if(x==1)return false;
     if(x==2)return true;
    if(x%2==0)return false;
    
    for(int i=3;i<=sqrt(x);i+=2 )
    {
        if(x%i==0)return false;
    }
    return true;
}

vector<int> primesum(int A) {
   vector<int>res(2); 
    for(int i=2;i<A;i++)
    {
        if(isprime(A-i) && isprime(i))
        {
            res[0]=i;
            res[1]=A-i;
            break;
        }
        
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