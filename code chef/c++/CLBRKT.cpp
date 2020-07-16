#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for (ll i = a; i <b; i++)
#define res(i,a,b) for (ll i = a; i >b; i--)
#define all(n) n.begin(),n.end()
typedef long long ll;
const int MAXN = 1e6 + 5;
const long long INF = 1e18 + 42;
bool comp(int v1,int v2){
    return v1>v2;
}
int n, q;
string s;
int queries[MAXN];
void solve(){
    n = s.length();
    stack<int> st;
    vector<int> nxt(n, -2);
    int i = 0;
    rep(i,0,n){
        if(s[i] == '(')
            st.push(i);
        else if(st.size() > 0)
            nxt[st.top()] = i, st.pop();
    }
    for(i = n - 2; i >= 0; i--){
        if(s[i] == ')')
            nxt[i] = nxt[i + 1];
    }
    rep(i,0,q)
        cout << nxt[queries[i] - 1] + 1 << endl;
}
void sol(){
    cin >> s >> q;
    int i = 0;
    for(i = 0; i < q; i++)
            cin >> queries[i];
    solve();
}
int main()
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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
