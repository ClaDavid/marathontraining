//Gerando Permutações Ordenadas Rapidamente
#include <iostream>
#include <algorithm>

using namespace std;

void permute(string str){
 
 sort( str.begin(), str.end() );
 do{
    cout << str << endl;
 } while ( next_permutation( str.begin(), str.end() ) );
}

int main(){
    
    int n;
    
    cin >> n;
    
    while(n--){
        
        string str;
        
        cin >> str;
        permute(str);
        cout << endl;
    }
    
    return 0;
}