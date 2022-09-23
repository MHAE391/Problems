#include <bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef unsigned long long ull;
#define FAST ios_base::sync_with_stdio(false);cin.tie(nullptr), cout.tie(nullptr);

void solve()
{
    string s;
    cin>>s;
    ll k; cin>>k;
    ll  x = s.size();
    vector<string>st;
    for(int i = 0;i<(1<<x);i++){
        string t="";
        for(int j = 0;j<x;j++){
            if((1<<j)&i){
                t+=s[j];
            }
        }
        st.push_back(t);
    }
    sort(st.begin(),st.end());
    cout<<st[k-1]<<"\n";
}
int main() {
    FAST
    ll  t=1;
     cin>>t;
    while(t--)solve();
    return 0;
}