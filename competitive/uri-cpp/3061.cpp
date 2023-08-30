#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second

typedef long long ll;
const int MAX = 1e6 + 10;

vector<vector<int>> g(MAX);
vector<int> vis(MAX);

bool visitados(){
    for(int x = 0; x < vis.size(); x++) if(vis[x] == 0) return false;

    return true;
}

void bfs(int i,int j){
    
}

int main(){
    int n, m; cin >> n >> m;

    int atu;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){ 

        }
    }

    int atuu = 0, result = 0;
    
    cout << "Resultado: " << result << endl;
    
    return 0;
}