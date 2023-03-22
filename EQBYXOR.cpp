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
    int a,b,n;
    cin >> a >> b >> n;
    int c=a^b;
    if(c==0) {
        cout << 0 << endl;
    }
    else if(c<n) {
        cout << 1 << endl;
    }
    else {
        while(c>=n) {
            c=c-(c&(-c));
        }
        if(c) {
            cout << 2 << endl;
        }
        else {
            cout << -1 << endl;
        }
    }
}

int32_t main()
{
    fastio
    testcases run_time_terror_();
}