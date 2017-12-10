//The 3n + 1 problem
#include <iostream>

using namespace std;

int main(){
    
    int i, j;
    
    while(cin >> i >> j){
        
        cout << i << " " << j << " ";
        
        if(i > j){
            i = i + j;
            j = i - j;
            i = i - j;
        }
        
        int aux = 0;
        while(i <= j){
            int cont = 1;
            int n = i;
            while(n != 1){
                if(n % 2 != 0) n = 3*n + 1;
                else n >>= 1;
                cont++;
            }
            if(aux < cont) aux = cont;
            i++;
        }
        cout << aux << endl;
    }
    return 0;
}