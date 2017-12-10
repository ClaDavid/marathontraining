//Hartals
#include <iostream>
#include <vector>

using namespace std;

#define loop(x, var) for(int x = 0; x < var; x++)

int main(){
    
    int casos, n_dias, p_partidos, h_parametro, dias_perdidos;
    
    cin >> casos;
    
    while(casos--){
        
        vector<int> vet1;
        dias_perdidos = 0;
        
        cin >> n_dias >> p_partidos;
        
        loop(i, p_partidos){
            cin >> h_parametro;
            vet1.push_back(h_parametro);
        }
        
        for(int i = 0, dias = 1; dias <= n_dias; i++, i %= 7, dias++){
            if((i != 5) && (i != 6)){
                loop(j, p_partidos){
                    if(!(dias % vet1[j])){
                        dias_perdidos++;
                        break;
                    }
                }
            }
        }
        cout << dias_perdidos << endl;
    }
    return 0;
}