//esfera
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    
    double raio, volume, pi = 3.14159;
    
    cin >> raio;
    
    volume = (4/3.0) * pi * pow(raio, 3);
    
    cout << "VOLUME = " << fixed << setprecision(3) << volume << endl;
    
    return 0;
}