#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define testcases int tt; cin>>tt; while(tt--)

#define dbg(x) cout<<'d'<<'b'<<'g'<<'-'<<'>'<<x<<endl;
#define pr(x) cout<<x<<endl;
#define pr2(x, y) cout<<x<<' '<<y<<endl;
#define pr3(x, y, z) cout<<x<<' '<<y<<' '<<z<<endl;

#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void run_time_terror_()
{
    int n; cin>>n;
    unordered_map<int, int> m;
    for(int i=0; i<n; i++)
    {
        int x; cin>>x;
        m[x]++;
    }
    int res = n*(n-1)/2;
    for(auto x : m){
        if(x.second > 1)
        {
            int k = x.second;
            res -= k*(k-1)/2;
        }
    }
    cout<<res<<"\n";
}

int32_t main()
{
    fastio
    testcases run_time_terror_();
}