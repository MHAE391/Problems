/*
 * Problem Link : https://codeforces.com/contest/68/problem/B
 */
#include <bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef unsigned long long ull;
#define FAST ios_base::sync_with_stdio(false);cin.tie(nullptr), cout.tie(nullptr);
bool can(vector<double>&v,double mid ,double k){
    double req=0,get=0;
    for(auto it:v){
        if(it>mid){
            get+=it-mid;
        }else req+=mid-it;
    }
    get-=get*k/100;
    return get>=req;
}
void solve()
{
    double n,k;
    cin>>n>>k;
    vector<double>v((int)n);
    for(int i=0;i<(int)n;i++)cin>>v[i];
    double l=0,r=1001,ans=0;
    while(r-l>1e-6){
        double mid = (l+r)/2;
        if (can(v, mid, k)) {
            ans = max(mid,ans); l = mid;
        } else r = mid;
    }
    cout<<setprecision(20)<<ans;
}
int main() {
    FAST
    ll  t=1;
    // cin>>t;
    while(t--)solve();
    return 0;
}