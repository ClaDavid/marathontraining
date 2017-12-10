//motoboy
#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int maior(int v1, int v2){
    if(v1 > v2) return v1;
    return v2;
}

int main(){
    
    int numeroPedidos, pizzaMax;
    int i, j;
    
    while(1){
        
        //entrada de dados para numero de pedidos e numero max de pizza
        cin >> numeroPedidos;
        if(numeroPedidos == 0) break;
        
        cin >> pizzaMax;
        
        int mochila[numeroPedidos + 1][pizzaMax + 1];
        int valor[numeroPedidos + 1], peso[numeroPedidos + 1];
        
        //entrada de dados para os pesos e valores das pizzas
        //e preencher na mochila
        for(i = 0; i < numeroPedidos; i++){
            scanf("%d %d", &valor[i], &peso[i]);
            //preenchimento da mochila, bloco de memória
            memset(&mochila[i], 0, sizeof(mochila[i])); 
        }
        
        //determinacao do tempo para entregar as pizzas
        for(i = 1; i <= pizzaMax; i++){
            for(j = 0; j < numeroPedidos; j++){
                //calculo para o problema da mochila
                if(j > 0){
                    mochila[j][i] = mochila[j-1][i];
                    if(peso[j] <= i)
                        mochila[j][i] = maior(mochila[j][i], mochila[j-1][i-peso[j]]+valor[j]);
                }
                else {
                        mochila[j][i] = 0;
                        if(peso[j] <= i) mochila[j][i] = maior(mochila[j][i], valor[j]);
                }
            }
        }
        printf("%d min.\n", mochila[numeroPedidos - 1][pizzaMax]);
    }
    
    return 0;
}
