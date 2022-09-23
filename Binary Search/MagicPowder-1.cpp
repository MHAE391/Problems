/*
 * Problem Link : https://codeforces.com/contest/670/problem/D1
 */
#include <bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef unsigned long long ull;
#define FAST ios_base::sync_with_stdio(false);cin.tie(nullptr), cout.tie(nullptr);

void solve()
{
    ll n,k;
    cin>>n>>k;
    vector<ll>Need(n);
    vector<ll>Have(n);

    for (int i = 0; i < n; ++i) cin>>Need[i];
    for (int i = 0; i < n; ++i) cin>>Have[i];
    ll ans =0, l = 0 , r = 2000;
    while(l<=r) {
        ll sum = 0,mid = (l+r)/2;
        for (int j = 0; j < n; j++) {
            if (Need[j] * mid > Have[j])sum += Need[j] * mid - Have[j];
        }
        if (sum <= k)ans = mid,l = mid +1 ;
        else r =mid -1 ;

    }
    cout<<ans;
}
int main() {
    FAST
    ll  t=1;
    // cin>>t;
    while(t--)solve();
    return 0;
}