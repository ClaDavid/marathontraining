//ir e vir
// Clarissa Simoyama David - RA: 131710231

#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

#define NMAX 2000

int reta[NMAX], origem[NMAX];
vector<int> adj[NMAX];
int cont;

int dfs (int i) {
    if (reta[i] != -1) 
        return reta[i];
    
    origem[i] = cont++;
    reta[i] = origem[i];

    for (int j = 0; j < adj[i].size(); j++) {
        reta[i] = min(reta[i], dfs(adj[i][j]));   
    }

    return reta[i];
}

int main () {
    int N, M;
    int V, W, P, i;

    while ( (cin >> N >> M) && (N && M) != 0) {
        
        cont = 0;
        for (i = 0; i < N; i++){
            reta[i] = -1;
            origem[i] = -1;
            adj[i].clear();
        }

        for (i = 0; i < M; i++){
            cin >> V >> W >> P;
            adj[V - 1].push_back(W - 1);
            if (P == 2) 
                adj[W - 1].push_back(V - 1);
        }
        
        dfs(0);
        
        for (i = 1; i < N && origem[i] > reta[i]; i++);

        if (i >= N) cout << "1"; 
        else cout << "0";
        
        cout << endl;
    }
    
    return 0;
}