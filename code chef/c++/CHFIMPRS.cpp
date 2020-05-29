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
void sol()
{
	ll n,m,t;
	cin>>n>>m;
	ll ans[n][m];
	map<ll,ll> val;
	rep(i,0,n){
		rep(i,0,m){
			cin>>t;
			val[t]++;
		}
	}
	if(m%2==0){
		auto it=val.begin();
		while(it!=val.end()){
			if (it->second%2!=0){
				cout<<-1<<endl;
				return ;
			}
			
			it++;
		}
		it=val.begin();
		rep(i,0,n){
			rep(j,0,m/2){
				if (it->second==0){
					it++;
				}
				ans[i][j]=it->first;
				ans[i][m-j-1]=it->first;
				it->second=(it->second)-2;
			}
		}
	}
	else{
		ll count=0;
		auto it=val.begin();
		while(it!=val.end()){
			if (it->second%2!=0){
				count++;
			}
			if(count>n){
				cout<<-1<<endl;
				return ;
			}
			it++;
		}
		it=val.begin();
		rep(i,0,n){
			rep(j,0,m/2){
				while(it->second == 0 or  it->second == 1 )
						it++;
				ans[i][j]=it->first;
				ans[i][m-j-1]=it->first;
				it->second=(it->second)-2;
			}
		}
		it=val.begin();
		rep(i,0,n){
			while (true){
				if (it->second!=0 ){
					break;
				}
				it++;
			}
			ans[i][m/2]=it->first;
			it->second--;
		}	
	}
	rep(i,0,n){
		rep(j,0,m){
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
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
