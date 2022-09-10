/*
 * Problem Link : https://codeforces.com/group/nMgBPsURd2/contest/346685/problem/P
 */
#include <bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef unsigned long long ull;
#define FAST ios_base::sync_with_stdio(false);cin.tie(nullptr), cout.tie(nullptr);
ll UpperBound(vector<ll>&v, ll x){
    ll l = 0, r = v.size();
    while(l<r){
        ll mid = (l+r)/2;
        if(v[mid] > x)r=mid;
        else l = mid+1;
    }
    return r;
}
void solve()
{
    ll n;
    cin>>n;
    vector<ll>v(n);
    vector<ll>pre(n);
    for (int i = 0; i < n; ++i) cin>>v[i];
    sort(v.begin(),v.end());
    pre[0]=v[0];
    for(int i=1;i<n;i++)pre[i]=pre[i-1]+v[i];
    ll q;
    cin>>q;
    while(q--){
        ll x;
        cin>>x;
        if(x<v[0])cout<<"-1\n";
        else cout<<UpperBound(v,x)<<" "<<pre[UpperBound(v,x)-1]<<"\n";
    }
}
int main() {
    FAST
    ll  t=1;
    // cin>>t;
    while(t--)solve();
    return 0;
}