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
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
    int t;
    cin >> t;
    while (t--) {
       	ll a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << (c - a) * (d - b) + 1 << '\n';
    }
}
