//fibonacci quantas chamadas
#include <iostream>

using namespace std;

int fib(int n){
    
    int calls;
    
    if (n == 0 || n == 1) return 1;
    else 
        return fib(n-1) + fib(n-2);
}

int contfib(int n){
    
    int calls = 0;
    
    calls = calls + 1;
    
    if (n == 0 || n == 1) return 1;
    else 
        fib(n-1) + fib(n-2);
        
    return calls;
}

int main(){
    
    int N, X;
    
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> X;
        cout << "fib(" << X << ") = " << contfib(X) << " calls" << endl;
    }
    
    
    return 0;
}