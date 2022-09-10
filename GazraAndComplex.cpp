/*
 * Problem Link : https://codeforces.com/group/nMgBPsURd2/contest/346685/problem/Q
 */
#include <bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef unsigned long long ull;
#define FAST ios_base::sync_with_stdio(false);cin.tie(nullptr), cout.tie(nullptr);
vector<ll>numbers;
void solve()
{
    ll  l ,r,ans = 0;
    cin>>l>>r;
    ll  x = upper_bound(numbers.begin(),numbers.end(),r)-numbers.begin();
    for(int i = 0 ;i <x;i++){
        ll  a = upper_bound(numbers.begin()+i,numbers.end(),r-numbers[i])-numbers.begin();
        ll  b = lower_bound(numbers.begin()+i,numbers.end(),l-numbers[i])-numbers.begin();
        ans+=(a-b);
    }
    cout<<ans<<"\n";
}
int main() {
    FAST
    ll sum = 0;
    for(ll i = 1 ; sum<=1e9;i++){
        sum=(i*(i+1))/2;
        numbers.push_back(sum);
    }
    ll  t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}