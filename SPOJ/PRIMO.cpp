#include <iostream>
#include <cmath>
 
using namespace std;

 
int main(){
 
    int N, cont = 0, i;
    cin >> N;
 
    if(N < pow(2, 31) ){
    for(i = 1; i <= N; i++){
        if(N%i == 0) cont++;
    }
    if(cont == 2){
        cout << "sim" << endl;
    } else{
        cout << "nao" << endl;
    }
    }
 
    return 0;
} 