#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for (ll i = a; i <b; i++)
#define res(i,a,b) for (ll i = a; i >b; i--)
#define all(n) n.begin(),n.end()
typedef long long ll;
const long long INF = 1e18 + 42;
bool comp(int v1,int v2){
    return v1>v2;
}
void sol(){
    ll n,k;
    cin>>n>>k;
    vector<int> v1(n);
    map<ll,vector<ll>> mp;
    rep(i,0,n){
        ll t;
        cin>>t;
        if(t%k!=0 and t>k)
        mp[k-t%k].push_back(k-t%k);
        else if (t%k!=0)
        mp[k-t].push_back(k-t);
    }
    ll ans=0,final=0;
    for(auto i: mp){
        if (ans<i.second.size() or (ans==i.second.size() and i.second[0]>final) ){
            ans=i.second.size();
            final=i.second[0];
        }
    }   
    if(ans!=0)
    cout<<(ans-1)*k+final+1<<endl;
    else
    cout<<ans<<endl;
}
int main() 
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int a;
    cin>>a;
    while(a--)
    {
        sol();
    }
}
