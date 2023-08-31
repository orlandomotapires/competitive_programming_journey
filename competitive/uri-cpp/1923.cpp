#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second

typedef long long ll;

const int MAX = 1e4+10;
//   nome   num
map<string, int> nomes;

vector<vector<int>> g(MAX);
set<int> res;

int vis[MAX];
int m;

void bfs(int v){

    list<int> queue;
    vis[v] = 1;

    queue.push_back(v);
    int grau_atu = 1;
 
    while (!queue.empty()) {
 
        v = queue.front();
        queue.pop_front();

        for (auto u : g[v]) {
            if (!vis[u]) {
                vis[u] = 1;
                queue.push_back(u);  
                if(queue.size() == g[u].size()) grau_atu++;
            }        
            if(grau_atu <= m) res.insert(u);
        }     
    }
}

int main(){
    int n; cin >> n >> m;

    string n1, n2;
    memset(vis, 0, sizeof(vis));

    for(int i = 0, j=0; i<n; i++){
        cin >> n1 >> n2;

        if(nomes.find(n1) == nomes.end()){
            nomes[n1] = j; j++;
        }
        
        if(nomes.find(n2) == nomes.end()){
            nomes[n2] = j; j++;
        }
            
        g[nomes[n1]].push_back(nomes[n2]);
        g[nomes[n2]].push_back(nomes[n1]);
    }

    bfs(0);
    res.erase(0);
    
    cout << res.size() << endl;
    for(auto j: nomes){
        if(res.count(j.second)) cout << j.first << endl;
    }

    return 0;
}