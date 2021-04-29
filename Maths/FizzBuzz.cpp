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


vector<string> fizzBuzz(int A) {
    vector<string>res;
    for(int i=1;i<=A;i++)
    {
        string temp="";
        if(i%3 ==0)
            temp+="Fizz";
        
        if(i%5==0)
            temp+="Buzz";
        if(temp=="")
        temp+=to_string(i);
        
        res.push_back(temp);
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