//Pontes de São Petersburgo
#include <iostream>
#include <stdio.h>
#include <vector> 

using namespace std;


//programacao dinamica
bool isSubsetSum(int set[], int n, int soma){
    
    bool subset[n + 1][soma + 1];
    int i;
    
    //caso base
    for(i = 0; i <= soma; i++){
        subset[i][0] = true;
    }
    
}


main(){
    
    int R, K;
    
    
    while(cin >> R && cin >> K){
        
        vector<int> vet (R + 1);
        
        //calculo do grau
        
        for(int i = 1; i <= K; i++){
            
            int R1, R2;
            
            cin >> R1 >> R2;
            
            vet[R1]++;
            vet[R2]++;
            //cout << vet[R1];
            //cout << vet[R2];
            
        }
        
        
        
        
        
        
    }
    
    
    
    return 0;
}