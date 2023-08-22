#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second

typedef long long ll;

const ll MAX = 1e6+10;

vector<vector<ll>> g(MAX);
ll vis[MAX];
ll t, result = 0;

// const int MAX = ;

void dfs(ll v){
    vis[v] = 1;
    for(auto u: g[v]) if(!vis[u]){
        dfs(u);

        if(u == t){
            result = 1;
            return;
        }
    }
}

int main(){
    ll n; cin >> n >> t;

    ll a;
    memset(vis, 0, sizeof(vis));

    for(int i = 1; i < n; i++) {
        cin >> a;
        g[i].push_back(i+a);
    }

    dfs(1);

    if(result) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
} 