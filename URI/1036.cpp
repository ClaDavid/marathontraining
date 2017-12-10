//formula bhaskara
#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

main(){
    
    double A, B, C;
    cin >> A;
    cin >> B;
    cin >> C;
    
    double delta, R1, R2;
    
    delta = (B*B) - (4*A*C);
    
    if(delta < 0.0 || A == 0.0){
        cout << "Impossivel calcular" << endl;
    }
    else if(delta > 0.0){
        R1 = (-B + (sqrt(delta)))/(2*A);
        R2 = (-B - (sqrt(delta)))/(2*A);
        printf("R1 = %.5lf\n", R1);
        printf("R2 = %.5lf\n", R2);
    }
    else{
        R1 = (-B)/(2*A);
        R2 = R1;
        printf("R1 = %.5lf\n", R1);
        printf("R2 = %.5lf\n", R2);
    }
    
    

    
    
    return 0;
    
    
}