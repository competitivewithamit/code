#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for (ll i = a; i <b; i++)
#define res(i,a,b) for (ll i = a; i >b; i--)
#define all(n) n.begin(),n.end()
typedef long long ll;
const long long INF = 1e18 + 42;
bool comp(vector<double> v1,vector<double> v2){
    if(v1[1]!=v2[1])
    return v1[1]>v2[1];
    else
    return v1[0]<v2[0];
}
vector<int> binary(ll n){
    vector<int> a(32,0);
    for(int i=0; n>0; i++)    
    {    
    a[i]=n%2;    
    n= n/2;  
    }
    return a;
}
void sol(){ 
    ll n,k;
    cin>>n>>k;
    vector<ll> v(32,0);
    rep(i,0,n){
        ll t;
        cin>>t;
        vector<int> v1=binary(t);
        rep(i,0,32){
            if(v1[i]==1){
                v[i]++;
            }
        }
    }
    vector<vector<double>> v1;
    rep(i,0,32){
        vector<double> t(2);
        t[0]=pow(2,i);
        t[1]=v[i]*pow(2,i);
        v1.push_back(t);
    }
    sort(all(v1),comp);
    ll ans=0;
    rep(i,0,k){
        ans+=v1[i][0];
    }
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
