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
#define ump unordered_map<ll, ll>
#define uns unordered_set<ll>
#define vll vector<ll>

void run_time_terror_()
{
    int n; cin>>n;
    int c = 0, tmp = n;

    if(n==1)
    {
        cout<<1<<"\n";
        return;
    }
    while(n){
        n/=2;
        c++;
    }

    n = tmp;
    int p = pow(2, (c-1));
    int ans1 = n-p+1;
    if(n&(n-1) == 0) ans1--;
    int ans2 = p-p/2;
    cout<<max(ans1, ans2)<<"\n";
}

int32_t main()
{
    fastio
    testcases run_time_terror_();
}