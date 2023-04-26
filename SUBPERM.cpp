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
    int n, k; cin>>n>>k;
    if(n==1){
        cout<<1<<"\n";
        return;
    }
    if(k==1){
        cout<<-1<<"\n";
        return;
    }
    if(k==n-1){
        for(int i=1; i<n-1; i++) cout<<i<<" ";
        cout<<n<<" "<<k;
    }
    else{
        for(int i=1; i<k; i++) cout<<i<<" ";
        for(int i=n; i>=k; i--) if(i%2) cout<<i<<" ";
        for(int i=n; i>=k; i--) if(i%2==0) cout<<i<<" ";
    }    
    cout<<"\n";
}

int32_t main()
{
    fastio
    testcases run_time_terror_();
}