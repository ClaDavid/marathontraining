#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    
    int teste = 1, m, res, op, i;
    
    
    while(teste){
        
        cin >> m;
        
        if(m == 0){
            teste = 0;
            exit(0);
        }
        
        res = 0;
        
        for(i = 0; i < m; i++){
            cin >> op;
            res += op;
        }
        
        cout << "Teste " << teste << endl;
        cout << res << endl << endl;
        
        teste++;
        
        
    }
    
    return 0;
}