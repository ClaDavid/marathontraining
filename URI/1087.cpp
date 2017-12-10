//Dama
#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

main(){
    
    int X1, Y1, X2, Y2;
    
    while(X1 != 0){
        cin >> X1;
        cin >> Y1;
        cin >> X2;
        cin >> Y2;
        
        if(X1 == 0) ;
        else if(X1 == X2 && Y1 == Y2) cout << 0 << endl;
        else if(X1 == X2 || Y1 == Y2) cout << 1 << endl;
        else if(abs(X2 - X1) == abs(Y2 - Y1)) cout << 1 << endl;
        else cout << 2 << endl;

    }
    

    
    return 0;
    
    
}