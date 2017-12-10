#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int teste = 1;
    int v, aux;
    int i, j, k, l;
 
    while(teste){
        
        cin >> v;
        
        if(v == 0){ 
            teste = 0; 
            exit(0);
        }
        
        cout << "Teste " << teste << endl;
        
        i = 0;
        j = 0;
        k = 0;
        l = 0;
 
        i = v/50;
        aux = v%50;
        j = aux/10;
        aux = v%10;
        k = aux/5;
        aux = v%5;
        l = aux/1;
        
        cout << i << " " << j << " " << k << " " << l << " " << endl << endl;
        teste++;
 
    }
    
    return 0;
}