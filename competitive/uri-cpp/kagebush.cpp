#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second

typedef long long ll;
// const int MAX = ;

int main(){
    float n; 

    while(cin >> n){
        int tecnica = 0;
        while(n/2 >= 1){
            tecnica ++;
            n /= 2;
        }
        
        cout << tecnica << endl;
    }
    
    return 0;
}