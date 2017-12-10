#include <iostream>
 
using namespace std;
 
int main(){
    int n, i, sequencia, teste = 1;
 
    while(cin >> n && n){
        for(i = 1; i <= n; i ++){
            cin >> sequencia;
            if(sequencia == i){
                cout<<"Teste " << teste++ << "\n" << sequencia << "\n\n";
            }
        }
    }
    return 0;
}
 