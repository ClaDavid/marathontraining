//cortando canos
// Clarissa Simoyama David - RA: 131710231
#include <iostream>

using namespace std;

int max(int a, int b){
    if (a > b) return a;
    return b;
}

int valorTotal(int T, int N, int mochila[], int C[], int V[]){
    
    for(int i = 0; i <= T; i++){
        mochila[i] = 0;
        for(int j = 0; j < N; j++){
            if(C[j] <= i)
                mochila[i] = max(mochila[i], mochila[i - C[j]] + V[j]);
        }
    }
    return mochila[T];
}

int main(){
    
    int N, T;
    int C[2000], V[5000];
    int mochila[5000];
    int i;
    
    cin >> N >> T;
    
    for(i = 0; i < N; i++){
        cin >> C[i] >> V[i];
    }
    
    cout << valorTotal(T, N, mochila, C, V) << endl;
            
    
    return 0;
}