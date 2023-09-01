#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second

typedef long long ll;
int n;

const int MAX = 1e4;

int vis[MAX];

void dfs(int v, vector<vector<int>> g){
    vis[v] = 1;
    cout << (char) v << ',';

    for(auto u : g[v]) if(!vis[u]){
        dfs(u, g);
    }
}

int main(){
    int c; cin >> c;
    int para = 0;

    while(c > para){
        para++;

        memset(vis, 0, sizeof(vis));

        int a, b; cin >> a >> b;
        
        vector<vector<int>> g('a' + a);
        
        char n1, n2;
        for(int i = 0; i< b; i++){
            cin >> n1 >> n2;
            g[n1].push_back(n2);
            g[n2].push_back(n1);
        }

        cout << "Case #" << para << ":" << endl;
        int res = 0;
        for(int j = 'a'; j < 'a' + a; j++){
            if(!vis[j]){
                dfs(j, g);
                cout << endl;
                res++;
            }
        }

        cout << res << " connected components" << endl;
        if(c > para - 1) cout << endl;
    }
		
    return 0;
}