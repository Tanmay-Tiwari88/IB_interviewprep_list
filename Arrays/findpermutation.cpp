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

vector<int> findPerm(const string A, int B) {

    vector<int>res(B);
    for(int i=0;i<B;i++)
    res[i]=i+1;
    vector<int>res2;
    int i=0;int j=res.size()-1;
    for(auto it:A)
    if(it=='D')res2.push_back(res[j--]);
    else res2.push_back(res[i++]);

    if(res2.back()==res[i])res2.push_back(res[j--]);
    else res2.push_back(res[i++]);
    return res2;


}
 
 
int32_t main()
{
    fast_io;
    findPerm("ID",3);
}