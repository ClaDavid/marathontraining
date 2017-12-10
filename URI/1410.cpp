//ele esta impedido
#include <stdio.h>
#include <iostream>



using namespace std;
void impedido(int A, int B, int C){
    
    if (A == B & A==C) printf ("N\n");
    else if (A == B & A==C) printf ("N\n");
    else if (A<C) printf("Y\n");
    else printf("N\n");
    
}

void maior(int def[]){
    if (def[0]>def[1]){
        int aux = def[0];
        def[0]=def[1];
        def[1]=aux;
    }
    
}

void troca (int def[],int a){
    if (a < def[0]){
        def[1] = def[0];
        def[0]=a;
    }
    else if (a < def[1]) def[1]= a;
        
}



main(){
    int A, D;
    int B, C;
    int adv;
    int def[2];
    
    
    while((cin >> A && A != 0) && (cin >> D && D != 0)){
        // atacantes
        scanf("%d ", &adv);
        for (int i = 1 ; i<A; i++){
            int aux;
            scanf("%d ", &aux);
            if (aux < adv) adv = aux;
        }
        
        //defesantes
        scanf("%d ", &def[0]);
        scanf("%d ", &def[1]);
        maior(def);
        for (int i = 2 ; i<D; i++){
            int aux;
            scanf("%d",&aux);
            troca(def,aux);
        }
        
        impedido(adv, def[0], def[1]);
        
           
        
        
        
    }
    
    
    return 0;
}