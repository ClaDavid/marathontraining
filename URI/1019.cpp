//conversao de tempo
#include <iostream>

using namespace std;

int main(){
    
    int NTempo;
    int horas, minutos, segundos;
    
    cin >> NTempo;

    
    horas = NTempo/3600;
    NTempo = NTempo%3600;
    
    minutos = NTempo/60;
    segundos = NTempo%60;
    
    cout << horas << ":" << minutos << ":" << segundos << endl;
    
    return 0;
}