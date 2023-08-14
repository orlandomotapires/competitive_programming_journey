#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define f first
#define s second

typedef long long ll;

vector<pair<int, int>> pizas(31);

// 21 pedidos 31 pizzas max
int matriz[21][31];
int p, mp;

void solve(){
    for(auto i = 0; i <= p; i++){
        for(auto j = 0; j <= mp; j++){
            if(i == 0 || j == 0) matriz[i][j] = 0;  
            else {
                if(pizas[i].second > j) matriz[i][j] = matriz[i - 1][j];
                else matriz[i][j] = max(matriz[i - 1][j - pizas[i].second] + pizas[i].first, matriz[i - 1][j]);
            }
        } 
    } 
}

int main(){
    while((cin >> p) && p){
        cin >> mp;
        for(int i = 1; i <= p; i++){
            cin >> pizas[i].first >> pizas[i].second;
        }    

        solve();     

        cout << matriz[p][mp] << " min." << endl;
    }

    return 0;
}