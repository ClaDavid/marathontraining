//Highest and Position
#include <iostream>

using namespace std;

int main(){
    
    int numero, maior = 0, aux = 0;
    
    for(int i = 1; i <= 100; i++){
        cin >> numero;
        if(numero > maior){
          maior = numero;
          aux = i;
        } 
    }
    
    cout << maior << endl;
    cout << aux << endl;
    
    
    return 0;
}