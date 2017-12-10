//area
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    
    double A, B, C, pi = 3.14159;
    double triangulo, circulo, trapezio, quadrado, retangulo;
    
    cin >> A >> B >> C;
    
    triangulo = (A * C) / 2;
    circulo = pi * pow(C, 2);
    trapezio = ((A + B) / 2) * C;
    quadrado = pow(B, 2);
    retangulo = A * B;
    
    cout << "TRIANGULO: " << fixed << setprecision(3) << triangulo << endl;
    cout << "CIRCULO: " << fixed << setprecision(3) << circulo << endl;
    cout << "TRAPEZIO: " << fixed << setprecision(3) << trapezio << endl;
    cout << "QUADRADO: " << fixed << setprecision(3) << quadrado << endl;
    cout << "RETANGULO: " << fixed << setprecision(3) << retangulo << endl;
    
    return 0;
}