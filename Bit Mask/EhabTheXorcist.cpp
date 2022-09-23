#include <bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef unsigned long long ull;
#define FAST ios_base::sync_with_stdio(false);cin.tie(nullptr), cout.tie(nullptr);

void solve()
{
    ll  u , sum;
    cin>>u>>sum;

    if(sum < u or (sum-u)%2 == 1){
        cout<<-1;
        return;
    }
    if(sum == u and sum == 0){
        cout<<0;
        return;
    }
    if(sum == u){
        cout<<1<<"\n"<<sum;
        return;
    }
    ll  x = (sum-u)/2;
    if(((x+u)^x )== u){
        cout<<2<<"\n"<<x+u<<" "<<x;
    }else {
        cout<<3<<"\n"<<x<<" "<<x<<" "<<u;
    }
}
int main() {
    FAST
    ll  t=1;
    // cin>>t;
    while(t--)solve();
    return 0;
}