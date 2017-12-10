//promessa de campanha
#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

vector<int> G[100];
int cor[100];

//metodo para busca em profundidade
void buscaProf(int x){
    int i, j;
    cor[x] = 1;
    for(i = 0; i < G[x].size(); i++){
        j = G[x][i];
        if(!cor[j]) buscaProf(j);
    }
}

int main() {
    int T, N, M, X, Y, numEstrada;
    int i, k;
    
    cin >> T;
    for(k = 1; k <= T; k++) {
        for(i = 1; i <= 100; i++) G[i].clear();
        
        memset(cor, 0, sizeof cor);
        numEstrada = -1;
        
        
	    cin >> N;
	    cin >> M;

        for(i = 0; i < M; i++) {
            cin >> X;
	        cin >> Y;
            G[X].push_back(Y);
            G[Y].push_back(X);
        }
        
        for(i = 1; i <= N; i++){
            if(!cor[i]){
                numEstrada++;
		        buscaProf(i);
	        }
	    }

        if(numEstrada) printf( "Caso #%d: ainda falta(m) %d estrada(s)\n", k, numEstrada );
        else printf( "Caso #%d: a promessa foi cumprida\n", k );
    }

    return 0;
}