#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second

const int MAX = 1e5+10;

typedef long long ll;

int n, m;

vector<vector<int>> g(MAX);
vector<bool>  vis(MAX);

void dfs(int atu){
    vis[atu] = true;

    for(auto u : g[atu]) if(!vis[u]){
        dfs(u);
    }   
}

int main(){
    cin >> n >> m;

    for(int i = 0; i < m; i++){
        int p, f; cin >> p >> f;
        g[p].push_back(f);
        g[f].push_back(p);
    } 

    int result = 0;
    for(int i = 1; i <= n; i++){
        if(!vis[i]){
            result++;
            dfs(i);
        }
    }

    cout << result << endl;
        
    
    return 0;
}