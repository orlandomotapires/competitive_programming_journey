#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second

typedef long long ll;
int n;

const int MAX = 1e6 + 10;
vector<int> flechas(MAX);

int main(){
    
    cin >> n;
    ll aux;
    int result = 0;

    for(int i = 0; i < n; i++){
        cin >> aux;

        if(flechas[aux])
            flechas[aux]--;
        else
            result++;
    
        flechas[aux-1]++;
    }

    cout << result << endl;

    return 0;
}