// Clarissa Simoyama David - RA: 131710231
//matrizes
#include <stdio.h>
#include <bits/stdc++.h>
#include <iostream>

using namespace std;
 
void printOptimalParens(int i, int j, int n,
                      int *s, int &numero){

    if (i == j){
        cout << 'A' << numero++;
        return;
    }
 
    cout << "(";

    printOptimalParens(i, *((s+i*n)+j), n,
                     s, numero);

    printOptimalParens(*((s+i*n)+j) + 1, j,
                     n, s, numero);
    cout << ")";
}




void matrixChainOrder(int p[], int n){

    int m[n][n]; 
    int s[n][n];
    bool flag = true;
 
    for (int i = 1; i < n; i++)
        m[i][i] = 0;
 
    for (int l = 2; l < n; l++){
        for (int i = 1; i < n - l + 1; i++){
            
            int j = i + l - 1;
            m[i][j] = INT_MAX;
            
            for (int k = i; k <= j - 1; k++){
                
                int q = m[i][k] + m[k + 1][j] + p[i - 1]*p[k]*p[j];
                
                if(q == m[i][j]) flag = false;
                
                else if (q < m[i][j]){
                    m[i][j] = q;
 
                    s[i][j] = k;
                }
            }
        }
    }
 
    int numero = 1;
    
    if(flag == true){ 
        printOptimalParens(1, n-1, n, (int *)s, numero);
        cout << "" << endl;
        
    }
    else cout <<  m[1][n-1] << endl;
}

int main(){
    
    int N, l, C;
    int ite1, ite2, i, j;
    
    while(scanf("%d", &N) && N != 0){
        int matrizInicial[N][2];
        
        for(ite1 = 0; ite1 < N; ite1++){
            for(ite2 = 0; ite2 < 2; ite2++){
                scanf("%d", &matrizInicial[ite1][ite2]);
            }
        }
        
        int p[N + 1];
        
        for(ite1 = 0; ite1 < N; ite1++){
            p[ite1] = matrizInicial[ite1][0];
        }
        
        p[N] = matrizInicial[N - 1][1];
        
        matrixChainOrder(p, (sizeof(p)/sizeof(*p)));
    }
    return 0;
}