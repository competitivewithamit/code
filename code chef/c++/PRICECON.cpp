#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for (ll i = a; i <b; i++)
#define res(i,a,b) for (ll i = a; i >b; i--)
#define all(n) n.begin(),n.end()
typedef long long ll;
const long long INF = 1e18 + 42;
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define SQ(a) (a)*(a)
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
bool comp(int v1,int v2){
	return v1>v2;
}
void sol(){
	ll n,k,t,ans=0;
	cin>>n>>k;
	rep(i,0,n){
		cin>>t;
		if(t>k)
		ans+=t-k;
	}
	cout<<ans<<endl;
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	ll a;
	cin>>a;
	while(a--)
	{
		sol();
	}
}
