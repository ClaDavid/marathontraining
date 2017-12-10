//comparacao de substring
#include <iostream>
#include <cstring>

using namespace std;

int calcula(char *str1, char *str2){
    
    int i, j, k, count, max = 0;
    int nstr1 = strlen(str1), nstr2 = strlen(str2);
    
    for(i = 0; i < nstr1; i++){
        for(j = 0; j < nstr2; j++){
            if(str1[i] == str2[j]){
                count = 0;
                
                for(k = 0; (k + i) < nstr1, (k + j) < nstr2; k++){
                    if(str1[k + i] != str2[k + j]) break;
                    count++;
                }
                if(count > max) max = count;
            }
        }
    }
    
    return max;
}

int main(){
    
    char str1[100], str2[100];
    
    while(cin.getline(str1, 100)){
        cin.getline(str2, 100);
        cout << calcula(str1, str2) << endl;
    }
    
    return 0;
}