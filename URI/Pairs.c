#include <stdio.h>
#include <stdlib.h>

int comp (const void * elem1, const void * elem2) 
{
    int f = *((int*)elem1);
    int s = *((int*)elem2);
    if (f > s) return  1;
    if (f < s) return -1;
    return 0;
}

int main(){
    
    int N, K, numeroPares = 0;
    
    scanf("%d %d", &N, &K);
    
    int vetor[N];
    
    int i;
    
    for(i = 0; i < N; i++) scanf("%d", &vetor[i]);
    
    qsort(vetor, sizeof(vetor)/sizeof(*vetor), sizeof(*vetor), comp);
    
    for(i = 0; i < N - 1; i++){
        if(vetor[i + 1] - vetor[ i ] == K) numeroPares++;
    }
    
    // for(i = 0; i < N; i++) printf("%d\n", vetor[i]);
    printf("%d", numeroPares);
    
    return 0;
}