/*
 * Problem Link : https://codeforces.com/contest/371/problem/C
 */
#include <bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef unsigned long long ull;
#define FAST ios_base::sync_with_stdio(false);cin.tie(nullptr), cout.tie(nullptr);
int B=0,S=0,C=0,pb,ps,pc,b,s,c;
ll have;
bool can(ll mid){
    ll Bread = mid * B;
    ll Sausage = mid * S;
    ll Cheese = mid * C;
    ll BreadNeed=0,SausageNeed=0,CheeseNeed=0;
    if(Bread>b)BreadNeed=Bread-b;
    if(Sausage>s)SausageNeed=Sausage-s;
    if(Cheese>c)CheeseNeed=Cheese-c;

    ll moneyNeed =(ll) BreadNeed *pb + (ll)SausageNeed*ps + (ll)CheeseNeed*pc;
    return moneyNeed<=have;
}
void solve()
{
    string res;
    cin>>res>>b>>s>>c>>pb>>ps>>pc>>have;
    for(auto it:res){
        if(it=='B')B++;
        else if(it == 'S')S++;
        else C++;
    }

    ll  ans = 0,l=1,r=3e12;
    while(l<=r){
        ll mid = (l+r)/2;
        if(can(mid)){
            ans=mid;
            l=mid+1;
        }else r=mid-1;
    }
    cout<<ans<<"\n";
}
int main() {
    FAST
    ll  t=1;
    // cin>>t;
    while(t--)solve();
    return 0;
}