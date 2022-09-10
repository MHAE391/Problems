/*
 * Problem Link : https://codeforces.com/contest/670/problem/D2
 */
#include <bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef unsigned long long ull;
#define FAST ios_base::sync_with_stdio(false);cin.tie(nullptr), cout.tie(nullptr);
bool  can ( vector<ll>&Need , vector<ll>&Have , ll mid , ll k ){
    ll sum = k ;
    for(int i =0 ; i <Need.size();i++){
        if((ll)Need[i]  * mid  > Have[i] ){
            sum -= (ll)Need[i]  * mid  - Have[i];
            if(sum < 0)return false;
        }
    }
    return true;
}
void solve()
{
    ll n,k;
    cin>>n>>k;
    vector<ll>Need(n);
    vector<ll>Have(n);

    for (int i = 0; i < n; ++i) cin>>Need[i];
    for (int i = 0; i < n; ++i) cin>>Have[i];
    ll ans =0, l = 0 , r = 2e9;
    while(l<=r) {
        ll mid = (l+r)/2;
        if(can(Need,Have , mid, k )){
            ans = mid;
            l = mid+1;
        }else r = mid -1 ;
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