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

bool hotel(vector<int> &arrive, vector<int> &depart, int c) {
    vector<pair<int,int>>timeArr;
    for(auto i:arrive)timeArr.push_back({i,1});
    for(auto i:depart)timeArr.push_back({i,-1});
    
    sort(timeArr.begin(),timeArr.end());
    int cx=0;
    
    for(auto i:timeArr)
    {
        cx+=i.second;
        if(cx>c)
        return 0;
    }
    return (cx>c)?0:1;
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