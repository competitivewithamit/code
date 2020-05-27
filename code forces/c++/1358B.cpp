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
	int n;
	cin>>n;
	vector<int> v1(n);
	rep(i,0,n){
		cin>>v1[i];
	}
	sort(v1.begin(),v1.end());
	int current=1,ongoing=1;
	rep(i,0,n){
		if (v1[i]<=current+ongoing-1){
			if (ongoing==1)
			{
			current=current+1;
		}
		else
			current=current+ongoing;

			ongoing=1;
		}
		else{
			ongoing=ongoing+1;
		}
	}
	cout<<current<<endl;
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
