#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second

typedef long long ll;
const int MAX = 1e6+10;

int n;

vector<vector<int>> g(MAX);

int w[MAX];

int dfs(int atu){
    if(g[atu].size() == 0) return w[atu] = 1;
    
    int cnt = 1;
    for(auto u: g[atu]) cnt += dfs(u);   
    
    return w[atu] = cnt;
}

bool isbalanced(int v){
    if(g[v].size() == 0) return true;
    
    int current_weight = w[g[v][0]];
    for(auto u: g[v]) if(current_weight != w[u] or !isbalanced(u)) return false;

    return true;
}

int main(){
    cin >> n;
    int a, b;

    for(int i = 0; i < n; i++){
        cin >> a >> b; g[b].push_back(a);   
    }
    
    dfs(0);

    if(isbalanced(0))cout << "bem" << endl;
    else cout << "mal" << endl;

    return 0;
}