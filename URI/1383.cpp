//sudoku
#include <stdio.h>
#include <iostream>
#include <string>


using namespace std;



main(){
    
    int n;
    int mat[9][9];
    int i, j, k;
    int soma = 285, instancia = 0;
    string saida = "";
    
    cin >> n;
    
    for(k = 0; k < n; k++){
        
        for(i = 0; i < 9; i++){
            for(j = 0; j < 9; j++){
                cin >> mat[i][j];
            }
        }
        
        int somaL[9], somaC[9], somaM[3][3];
        
        for(i = 0; i < 9; i++){ 
            somaL[i] = somaC[i] = somaM[i/3][i%3] = 0;
        }
        
        for(i = 0; i < 9; i++){
            for(j = 0; j < 9; j++){
                int sd = mat[i][j];
                sd *= sd;
                somaL[i] += sd;
                somaC[j] += sd;
                somaM[i/3][j/3] += sd;
                if(i == 8 && somaC[j] != soma) break;
            }
            if(somaL[i] != soma) break;
        }
        
        if(saida == ""){
            for(i = 0; i < 3; i++){
                for(j = 0; j < 3; j++){
                    if(somaM[i][j] != soma) saida = "NAO";
                }
            }
        }
        
        if(saida == "") saida = "SIM";
        
        instancia++;
        cout << "Instancia " << instancia << "\n" << saida << "\n" << endl;
        
        saida = "";
        
        
    }
    
    
    
    
    return 0;
    
    
    
    
}

       