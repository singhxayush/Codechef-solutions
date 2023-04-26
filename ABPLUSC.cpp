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
    int x; cin>>x;
    int s = sqrt(x);
    if(s*s == x) s--;
    int a = s, b = s, c = x-s*s;
    if(c>1e6)
    {
        int k = s+1;
        c = x-s*k;
        if(c<=0){
            cout<<1<<"\n";
            return;
        }
        else 
        {
            cout<<s<<" "<<k<<" "<<c<<"\n";
            return;
        }
        c = x-k*k;
        if(c<=0){
            cout<<1<<"\n";
            return;
        }
        else
        {
            cout<<s<<" "<<k<<" "<<c<<"\n";
            return;
        }
    }
    if(a <= 0 || c <= 0 || a >1e6 || c > 1e6) cout<<-1<<"\n";
    else cout<<a<<" "<<b<<" "<<c<<" "<<"\n";
}

int32_t main()
{
    fastio
    testcases run_time_terror_();
}