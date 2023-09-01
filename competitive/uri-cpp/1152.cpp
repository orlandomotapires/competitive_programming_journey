#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second

typedef long long ll;
int n;

#define N 500
using namespace std;

class Graph{

	//Adjacency. List
	vector<pair<int,int> > *l;
	int V;

public:
	Graph(int n){
		V = n;
		l = new vector<pair<int,int> >[n];
	}

	void addEdge(int x,int y,int w){
		l[x].push_back({y,w});
		l[y].push_back({x,w});
	}

	int prim_mst(){
		//most important stuff
		//Init a Min Heap
		priority_queue<pair<int,int>, vector<pair<int,int> > , greater<pair<int,int> > > Q; 

		//another array
		//visited array that denotes whether a node has been included in MST or Not
		bool * vis = new bool[V]{0};
		int ans = 0;

		//begin 
		Q.push({0,0}); // weight, node

		while(!Q.empty()){
			//pick out the edge with min weight
			auto best = Q.top();
			Q.pop();

			int to = best.second;
			int weight = best.first;

			if(vis[to]){
				//discard the edge, and continue
				continue;
			}

			//otherwise take the current edge
			ans += weight;
			vis[to] = 1;

			//add the new edges in the queue
			for(auto x:l[to]){
				if(vis[x.first]==0){
					Q.push({x.second,x.first});
				}
			}
		}
		return ans;
	}

};

int main(){
	int a, b, p;
	
	while(1){
		int ptotal = 0;
		int n, m; cin >> m >> n;
		Graph g(m);

		if(m + n == 0) break;

		for(int i = 0; i < n; i++){
			cin >> a >> b >> p;
			g.addEdge(a, b, p);
			ptotal += p;
		}

		cout << ptotal - g.prim_mst() << endl;
		
	}
		
    return 0;
}