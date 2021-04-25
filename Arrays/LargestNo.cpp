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

bool comp(int a ,int b)
{
    string X=to_string(a);
    string Y=to_string(b);
    return X+Y > Y+X;
}
 string largestNumber(const vector<int> &A) {
        vector<int> B=A;
        sort(B.begin(),B.end(),comp);

        string res;
        for(auto i:B)
            res+=to_string(i);
        if(res[0]=='0')return "0";
        return res;
    
}
 
int32_t main()
{
    fast_io;
    
    return 0;
}