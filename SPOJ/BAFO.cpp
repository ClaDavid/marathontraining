#include <iostream>
 
using namespace std;
 
int main(){
    int teste = 0;
    int rodadas = 1;
    int aldo, beto;
    int a, b;
    int r;
 
    cin >> rodadas;
 
    while(rodadas){
        cout << "Teste " << ++teste <<endl;
        aldo = 0;
        beto = 0;
        for(r=0; r<rodadas;r++){
            cin >> a >> b;
            aldo += a;
            beto += b;
        }
        if(aldo > beto) cout<< "Aldo\n" <<endl;
        else cout<< "Beto\n" <<endl;
        cin >> rodadas;
    }
 
 
return 0;
}