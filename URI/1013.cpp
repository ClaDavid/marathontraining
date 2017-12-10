//o maior
#include <iostream>

using namespace std;

int main(){
    
    
    int numero1, numero2, numero3, maior, maior2;
    
    cin >> numero1 >> numero2 >> numero3;
    
    maior = (numero1 + numero2 + abs(numero1 - numero2))/2;
    
    maior = (maior + numero3 + abs(maior - numero3))/2;
    
    cout << maior << " eh o maior" << endl;
    
    return 0;
}