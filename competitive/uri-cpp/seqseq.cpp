#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second

typedef long long ll;
// const int MAX = ;

vector<int> result;

int caso(int n){
    
    if(n == 0) result.push_back(n);
    if(n >= 1){
        caso(n-1);
        for(int i = 0; i < n; i++) result.push_back(n);
    }
    return n;
}

int main(){
    int n;
    int casonum = 0;
    
    while(cin >> n){
        caso(n);
        if(result.size() == 1) cout << "Caso " << ++casonum << ": " << result.size() << " numero" << endl;
        else cout << "Caso " << ++casonum << ": " << result.size() << " numeros" << endl;

        cout << result[0];
        for(int i = 1; i < result.size(); i++){
            cout << " " << result[i];
        }
        cout << endl; 
        cout << endl; 

        result.clear();
    }
    
    return 0;
}