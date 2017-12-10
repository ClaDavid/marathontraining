#include <iostream>

using namespace std;

int main(){
    
    int N, soma = 0, X;
    
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> X;
        soma += X;
    }
    
    cout << soma;
    
    return 0;
}