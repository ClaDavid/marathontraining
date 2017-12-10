#include <iostream>

using namespace std;

int main(){
    
    int N, fat;
    
    cin >> N;
    
    fat = N;
    
    if(N == 0) fat = 1;
    
    for(int i = (N - 1); i >= 1; i--){
        fat *= i;
    }
    
    cout << fat;
    
    return 0;
}