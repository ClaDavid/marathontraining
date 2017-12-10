//salario
#include <stdio.h>
#include <iostream>

using namespace std;

main(){
    
    int nFuncionario, nHoras;
    float nValor;
    cin >> nFuncionario;
    cin >> nHoras;
    cin >> nValor;
    
    float salario;
    salario = nHoras*nValor;
    
    printf("NUMBER = %d\n", nFuncionario);
    printf("SALARY = U$ %.2f\n", salario);
    
    
    
    return 0;
    
    
}