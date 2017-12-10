#include <iostream>

using namespace std;

int main(){
    
    int n, k, res = 0, instancia = 1, aux = 0;
    
    while(cin >> n){
    
        for(int i = 0; i < n; i++){
            cin >> k;
            if(n == 1 && k == 0){
                res = 0;
            }
            if(aux == k) {
                res = k;
                break;
            } else aux += k;
            
        }
        
        cout << "Instancia " << instancia << endl;
        if(res =)
        instancia++;
        
    }
    
    return 0;
}