#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second

typedef long long ll;

int main(){
    int n; cin >> n;
    vector<char> str(n);

    char prev;

    for(int i = 0; i < n; i++){
        cin >> str[i];

        if(i == 0) prev = str[i];
        else{
            if(str[i] == prev){

            }else{
                prev = str[i];
            }
        }
        
    }
    
    return 0;
}