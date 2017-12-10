//calculo simples
#include <iostream>
#include <iomanip>

using namespace std;


int main(){
    
    
    int codigoPeca1, nroPeca1;
    int codigoPeca2, nroPeca2;
    double valorPeca1, valorPeca2, total;
    
    cin >> codigoPeca1 >> nroPeca1 >> valorPeca1;
    cin >> codigoPeca2 >> nroPeca2 >> valorPeca2;
    
    total = nroPeca1*valorPeca1 + nroPeca2*valorPeca2;
    
    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << total << endl;
    
    
    
    return 0;
}