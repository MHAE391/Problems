#include <bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef unsigned long long ull;
#define FAST ios_base::sync_with_stdio(false);cin.tie(nullptr), cout.tie(nullptr);

void solve()
{
    ll n ,m,sum = 0;
    cin>>n>>m;
    vector<ll>v(m);
    vector<ll>power(65);
    for (int i = 0; i < m; ++i) {
        cin>>v[i];
        sum+=v[i];
        ll  x = (int)log2(v[i]);
        power[x]++;
    }
    if(sum<n){
        cout<<-1<<"\n";
        return;
    }

    ll ans = 0;
    for (int i = 0; i < 64; ++i) {
        if(((n>>i)&1) == 1){
            int j = i;
            while(power[j]==0)j++;
            for(int k=j;k>i;k--){
                power[k]--;    // 32
                power[k-1]+=2;   // 16   16
                //  8 8 16
                ans++;
            }
            //  8 16
            power[i]--;
        }
        //  8 8 16
        power[i+1]+=power[i]/2;
    }
    cout<<ans<<"\n";
}
int main() {
    FAST
    ll  t=1;
     cin>>t;
    while(t--)solve();
    return 0;
}