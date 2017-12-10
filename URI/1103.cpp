//Alarme despertador
#include <iostream>

using namespace std;



main(){
    
    int H1, M1, H2, M2, min1, min2;
    
    while(1){
        cin >> H1 >> M1 >> H2 >> M2;
        
        //condicao de parada
        if(H1 == 0 && M1 == 0 && H2 == 0 && M2 == 0) break;
        
        //para o horario inicial
        if(H1 == 0) min1 = 24*60 + M1; //pq comeca em meia noite, isto é, 24h
        else min1 = H1*60 + M1; //transforma em minutos a hora e somar com o M1
        
        //para o horario final
        if(H2 == 0) min2 = 24*60 + M2;
        else min2 = H2*60 + M2;
        
        //para o calculo dos minutos
        if(min2 > min1) cout << min2 - min1 << endl;
        else cout << (24*60) - (min1 - min2) << endl;
        
        
    }
    
    
    return 0;
    
    
}



