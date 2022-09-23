#include <bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef unsigned long long ull;
#define FAST ios_base::sync_with_stdio(false);cin.tie(nullptr), cout.tie(nullptr);

void solve()
{
    ll n;
    cin>>n;
    vector<vector<ll>>v(n+5,vector<ll>(n+5));
    for(int i = 1; i<=n; i++){
        for (int j = 1; j <=n ; ++j) {
            cin>>v[i][j];
        }
    }
    vector<ll>t(n);
    for (int i = 0; i < n; ++i) {
        t[i]=i+1;
    }
    vector<ll>ans;
    for(int i = 0;i<(1<<n);i++){
        vector<ll>x;
        for(int j = 0;j<n;j++){
            if((1<<j)&i){
                x.push_back(t[j]);
            }
        }
        if(!x.empty()){
            bool f=true;
            for (int j = 0; j < x.size(); ++j) {
                for (int k = j; k < x.size(); ++k) {
                    int a = x[j] ,b = x[k];
                    if(v[a][b]==1 and v[b][a] == 1)continue;
                    else {
                        f=false;
                        break;
                    }
                }
                if(f== false)break;
            }
            if(f== true){
                if(x.size()>ans.size())ans=x;
            }
        }
    }
    cout<<ans.size()<<"\n";
    for (auto it:ans)cout<<it<<" ";
}
int main() {
    FAST
    ll  t=1;
    // cin>>t;
    while(t--)solve();
    return 0;
}