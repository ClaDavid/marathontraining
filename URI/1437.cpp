//esquerda volver
#include <iostream>
#include <string>

using namespace std;

main(){
    
    int N;
    int dir;
    string com;
    string d = "NLSO";
    
    while(cin >> N && N != 0){
        cin >> com;
        dir = 0;
        
        for(int i = 0; i < com.size(); i++){
            if(com.at(i) == 'D') dir++;
            else dir--;
            
            if(dir == 4) dir = 0;
            if(dir == -1) dir = 3;
        }
        
        cout << d.at(dir) << endl;
        
    }



    
    return 0;
    
    
}