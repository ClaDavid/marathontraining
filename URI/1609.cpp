//contando carneirinhos
#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include <string.h>

using namespace std;

int carneirinhos[10000];

main(){
    
    memset(carneirinhos, 0, sizeof carneirinhos);
    
    int T, N, i, j, aux, aux2;
    cin >> T;
    
    for(int k = 0; k < T; k++){
        aux = 0;
        cin >> N;
        
        for(i = 0; i < N; i++){
            scanf("%d", &carneirinhos[i]);
            aux++;
        }
        
        aux2 = 0;
        
        for(i = 0; i < N; i++){
            aux2 = carneirinhos[i];
            
            for(j =i+1; j < N; j++){
                if(aux2 == carneirinhos[j]){
                    aux = aux-1;
                    break;
                }
            }
        }
        
        cout << aux << endl;
    }

    return 0;
}