//o troco
#include <stdio.h>
#include <iostream>
#include <math.h>
#include <iomanip>


using namespace std;

main(){
    int T, D, N;
    float preco;
    
    cin >> T;
    
    while(T != 0){
        
        cin >> D;
        cin >> N;
        
        double trocoMax = 0.0;
        
        for(int i = 0; i < N; i++){
            cin >> preco;
            
            double troco = fmod(D, preco);
            
            
            if(preco<=D && trocoMax<troco) trocoMax=troco;
            
            
            
        }

        cout << fixed;
        cout << setprecision(2);
        cout << trocoMax << endl;
        
        T--;
    }
    
    
    return 0;
}