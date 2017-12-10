//cedulas
#include <iostream>

using namespace std;

int contaNotas(int valor, int nota){
    return (valor/nota);
    
}



main(){
    
    int v, aux;
    
    cin >> v;
    
    cout << v << endl;
    
    cout << contaNotas(v, 100) << " nota(s) de R$ 100,00" << endl;
    aux = (v%100);
    cout << contaNotas(aux, 50) << " nota(s) de R$ 50,00" << endl;
    aux = (aux%50);
    cout << contaNotas(aux, 20) << " nota(s) de R$ 20,00" << endl;
    aux = (aux%20);
    cout << contaNotas(aux, 10) << " nota(s) de R$ 10,00" << endl;
    aux = (aux%10);
    cout << contaNotas(aux, 5) << " nota(s) de R$ 5,00" << endl;
    aux = (aux%5);
    cout << contaNotas(aux, 2) << " nota(s) de R$ 2,00" << endl;
    aux = (aux%2);
    cout << aux << " nota(s) de R$ 1,00" << endl;
    
    
       
    return 0;
}