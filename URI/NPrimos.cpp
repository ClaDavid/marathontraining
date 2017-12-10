#include <stdio.h>
#include <iostream>


using namespace std;

main(){
    
    int i, j, n, entrada;
    cin >> entrada;
    int n = 10000000;
    int vet[n];
    
    for (i = 2; i <= n; i++) vet[i] = 1;
 
    for (i = 2; i <= n; i++)
        if (vet[i])
            for (j = i; (j * i) <= n; j++)
                vet[i * j] = 0;
                
                
    
    for (i = 2; i <= n; i++)
        if (vet[i])
            cout << " " << i << endl;
 
    return 0;
    
    
}