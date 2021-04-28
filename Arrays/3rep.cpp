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

int repeatedNumber(const vector<int> &A) {
    

    int first=-1,second=-1,c1=0,c2=0;
    int n=A.size();
    for(auto i:A){
        if(i==first)c1++;
        else if(i==second)c2++;
        else if(c1==0){
            c1++;
            first=i;
        }
        else if(c2==0){
            c2++;
            second=i;
        }
        else{
            c1--;
            c2--;
        }
    }
    c1=0;c2=0;
    for(auto i:A)
    if(i==first)c1++;
    else if(i==second)c2++;
    
    if(c1>n/3)return first;
    if(c2>n/3)return second;
    return -1;
    
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