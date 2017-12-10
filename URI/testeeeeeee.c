#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n = 10;
    double soma = 0;
    double dragon;
    int m = 0;
    double i;
    double i0;
    for (m = 0; m < n; m++){
        i = pow(16, -m)* (4.0/(8.0 * m + 1.0) - 2.0/(8.0 * m + 4.0) - 1.0/(8.0 * m + 5.0) - 1.0/(8.0 * m + 6.0));
        soma += i;
        if(i - i0 < 0.001){
            n = m;
            break;
        }else i0 = i;
    }

    printf("O numero de iteracoes para chegar a precisao de 10^-4 foi de %d\nA soma total eh de %lf\n", n + 1, soma);
    return 0;
}