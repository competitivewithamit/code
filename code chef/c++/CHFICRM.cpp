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
	vector<int> v1(n);
	vector<int> ans(3,0);
	rep(i,0,n){
		cin>>v1[i];
	}
	bool flag=1;
	rep(i,0,n){
		if(v1[i]-5==5 and ans[0]>0){
			ans[0]--;
			ans[1]++;
			continue;
		}
		if(v1[i]-5==10 and ans[1]>0){
			ans[1]--;
			ans[2]++;
			continue;
		}
		if(v1[i]-5==10 and ans[0]>1){
			ans[0]-=2;
			ans[2]++;
			continue;
		}
		if(v1[i]-5==0 ){
			ans[0]++;
		}
		else{
			flag=0;
			break;
		}
	}
	if (flag==1){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
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
