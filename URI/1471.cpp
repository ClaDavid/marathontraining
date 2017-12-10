//mergulho
#include <iostream>
#include <vector> 

using namespace std;
//1300

main(){
    
    int N, R; //N = voluntarios que mergulhou e R = voluntarios que voltaram
    
    
    while(cin >> N && cin >> R){
        
        vector<int> vet (N + 1);
        
        for(int i = 0; i < R; i++){
            int valor;
            cin >> valor;
            vet.at(valor) = 1;
        }
        
        if(N == R) cout << "*" << endl;
        else{
        
            for(int i = 1; i <= N; i++){
                if(vet[i] != 1) cout << i << " ";
            }
            cout << endl;
        
        }
        
        
        
    }
    
    
    
    return 0;
}