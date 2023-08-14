#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second

typedef long long ll;

int n;

int main(){
    int t; cin >> t;

    for(int i = 0; i<t; i++){
        cin >> n;
        int bolatu = 1;

        vector<int> pals(n);
        for(int j = 0, b = 0;; j++){
   
            int h = sqrt(pals[b] + bolatu);         

            if((h*h == pals[b] + bolatu) || pals[b] == 0){
                pals[b] = bolatu;
                bolatu++;
                b = 0;
            }else{
                b++;
            }
  
            if(b == n) {
                bolatu--;
                break;
            }
                      
        }

        cout << bolatu << endl;
    }


    
    return 0;
}