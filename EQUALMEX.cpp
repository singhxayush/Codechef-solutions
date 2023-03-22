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
#define ump unordered_map<int, int>
#define uns unordered_set<int>
#define vll vector<int>

void run_time_terror_()
{
    int n; cin>>n;
    int a[2*n];
    int m[n+1] = {0};

    for(int i=0; i<2*n; i++){
        cin>>a[i];
        m[a[i]]++;
    }

    for(int i=0; i<=n; i++)
    {
        if(m[i]){
            if(m[i]<2){
                cout<<"NO\n";
                return;
            }
        }
        else{
            cout<<"YES\n";
            return;
        }
    }
    cout<<"YES\n";
}

int32_t main()
{
    fastio
    testcases run_time_terror_();
}