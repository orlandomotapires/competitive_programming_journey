#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second

typedef long long ll;
// const int MAX = ;

vector<vector<int>> g(60);
int vis[60];
int result;

void dfs(int v){
    vis[v] = 1;

    for(auto u: g[v]) if(vis[u] == 0){
        result++;
        dfs(u);
    }
}

int main(){
    int nc; cin >> nc;

    for(int i = 0; i < nc; i++){
        int inifim; cin >> inifim;
        int qntv, qnta; cin >> qntv >> qnta;
        result = 0;

        memset(vis, 0, sizeof(vis));

        for(int j = 0; j < qnta; j++){
            int a, b; cin >> a >> b;

            g[a].push_back(b);
            g[b].push_back(a);
        }

        dfs(inifim);

        for(int j = 0; j < qntv; j++) g[j].clear();
        
        cout << "Result: " << result*2 << endl;
    }
    
    return 0;
}