#include <iostream>
#include <string>

using namespace std;

int main(){
    
    int N, A, B, teste = 1;
    string nome1, nome2;
    
    while(cin >> N && N){
    
        cin >> nome1 >> nome2;    
        
        cout << "Teste " << teste++ << endl;
        
        for(int i = 0; i < N; i++){
            cin >> A >> B;
            
            if((A+B)%2 == 0) cout << nome1 << endl;
            else cout << nome2 << endl;
        }
    }
    
    return 0;
}