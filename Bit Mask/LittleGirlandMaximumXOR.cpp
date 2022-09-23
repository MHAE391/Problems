#include <bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef unsigned long long ull;
#define FAST ios_base::sync_with_stdio(false);cin.tie(nullptr), cout.tie(nullptr);

void solve()
{
    ll l,r;
    cin>>l>>r;
    ll XOR = l^r;
    ll x=0;
    while(XOR){
        x++;
        XOR/=2;
    }
    cout<<(ll)pow(2,x)-1;
}
int main() {
    FAST
    ll  t=1;
    // cin>>t;
    while(t--)solve();
    return 0;
}