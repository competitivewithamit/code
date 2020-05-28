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
	string s;
	cin>>s;
	int n=s.size();
	int count=0,i=2;
	while(i<s.size()){
		if((n-i)%2==0 and i%2==0){
			if(s.substr(0,int(i/2)) == s.substr(int(i/2),int(i/2)) and  s.substr(i,n).substr(0,int((n-i)/2))==s.substr(i,n).substr(int((n-i)/2),n)){
				count+=1;
			}
		}

		i+=2;
	}
	cout<<count<<endl;
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
