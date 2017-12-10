//festival de estatuas de gelo
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define tamanho 1000000

using namespace std;

int bloco[tamanho];

int minNumBlocos(int comprimentos[], int N, int M){
    int i, j, k;
    
    if(M%comprimentos[N-1] == 0) return M/comprimentos[N-1];
    
    memset(bloco, 999999, sizeof(bloco));
    bloco[0] = 0;
    
    for(i=0; i < N; i++){
        k = comprimentos[i];
        for(j = k; j <= M; j++){
             bloco[j] = min(bloco[j], bloco[j-k]+1);
        }
    }
    
    return bloco[M];
}

int comparar(const void *a, const void *b){
  return ( *(int*)a - *(int*)b );
}

int main(){
    int comprimentos[26];
    int T, N, M;
    int i, j;
    
    cin >> T;
	
    for(i = 0; i < T; i++){
		  cin >> N;
		  cin >> M;
          for(j = 0; j < N; j++) scanf("%d", &comprimentos[j]);
		  
          qsort(comprimentos, N, sizeof(int), comparar);
		  
		  cout << minNumBlocos(comprimentos, N, M) << endl;
		  
    }
    return 0;
}