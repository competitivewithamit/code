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
	int n;
	cin>>n;
	if (n%2!=0){
		rep(i,0,n){
			rep(j,0,n){
				cout<<i*n+j+1<<" ";
			}
			cout<<endl;
		}
	}
	else{
		int cnt=1,j;
		rep(i,1,n+1){
			if(i%2!=0){
				rep(j,0,n){
					cout<<cnt<<" ";
					cnt++;
				}
				cout<<endl;
			}
			else{
				cnt=i*n;
				rep(j,0,n){
					cout<<cnt<<" ";
					cnt--;
				}
				cnt=i*n+1;
				cout<<endl;
			}
		}	
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
