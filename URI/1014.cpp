//consumo
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    int distanciaPercorrida;
    double combustivelGasto, consumoMedio;
    
    cin >> distanciaPercorrida >> combustivelGasto;
    
    consumoMedio = distanciaPercorrida / combustivelGasto;
    
    cout << fixed << setprecision(3) << consumoMedio << " km/l" << endl;
    
    return 0;
}