// Solution: https://www.youtube.com/watch?v=Npc9Q7yvR7w&ab_channel=CodingDynamo

#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second

typedef long long ll;

map<ll, bool> din;

// n = n/3 + (n/3) * 2

bool divide(int n, int m){
    if(n == m) return true;
    else{
        if(n > m && n % 3 == 0){
            if(!din.count(n/3)) din[n/3] = divide(n/3, m);
            if(!din.count((n/3) * 2)) din[(n/3) * 2] = divide((n/3) * 2, m);
            
            return din[n/3] || din[(n/3) * 2];
        } 
        return false;
    }
}


int main(){
    int t; cin >> t;
    int n, m;
    
    for(int i = 0; i < t; i++){
        cin >> n >> m;
        bool res = divide(n, m);
        din.clear();

        if(res) cout << "YES";
        else cout << "NO";

        cout << endl;
    }
    
    return 0;
}