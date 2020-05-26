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
	vector<int> v1(n),v2;
	rep(i,0,n){
		cin>>v1[i];
	}
	int prev=v1[0];
	v2.push_back(v1[0]);
	rep(i,0,n){
		if (prev!=v1[i]){
			if (count(v2.begin(),v2.end(),v1[i])>0){
				cout<<"NO"<<endl;
				return;
			}
			v2.push_back(v1[i]);
		}
		prev=v1[i];
	}
	vector <int> v3;
	rep(i,0,v2.size()){
		if (count(v3.begin(),v3.end(),count(v1.begin(),v1.end(),v2[i]))>0){
			cout<<"NO"<<endl;
			return;
		}
		v3.push_back(count(v1.begin(),v1.end(),v2[i]));
	}
	cout<<"YES"<<endl;
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
