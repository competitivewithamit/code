#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for (ll i = a; i <b; i++)
#define res(i,a,b) for (ll i = a; i >b; i--)
#define all(n) n.begin(),n.end()
typedef long long ll;
const long long INF = 1e18 + 42;
#define MOD 1000000007
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
//declaring hash vectors
vector<ll> hasharr(200005),p(200005);
int hashcom(int l ,int r){
	return ((hasharr[r+1]-(hasharr[l]*p[r-l+1])%MOD)+MOD)%MOD;
}
void sol(){
	string s;//taking input
	cin>>s;
	int n=s.length(),ans=0,i=2,l1,l2,l3,l4,r1,r2,r3,r4;
	rep(i,0,n)
        {
            hasharr[i+1]=(hasharr[i]*31+s[i])%MOD;
        }

	while(i<n){
		//t1
		l1=0;
		r1=i/2-1;
		//t2
        l2=r1+1;
        r2=i-1;
        //t3
        l3=i;
        r3=(i+n)/2-1;
        //t4
        l4=r3+1;
        r4=n-1;
        if(hashcom(l1,r1)==hashcom(l2,r2)and hashcom(l3,r3)==hashcom(l4,r4) ){
        	ans+=1;
        }
        i+=2;
	}
	cout<<ans<<endl;
}
int main()
{
//input and output stream
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	p[0]=1;
	rep(i,1,200005){
		p[i]=(p[i-1]*31)%MOD;
	}
	int a;
	cin>>a;
	while(a--)
	{
		sol();
	}
}
