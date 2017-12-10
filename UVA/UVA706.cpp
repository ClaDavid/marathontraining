// LC-Display
#include <iostream>
#include <cstring>
 
using namespace std;

#define loop(x, var) for(int x = 0; x < var; x++)

char n[50]; 
int s, aux;


int main(){
 
    while(cin >> s >> n && (s || n)){
        if(s == 0) break;
 
        aux = strlen(n);
        
        loop(i, (s + 2)*aux){
            switch(n[i/(s + 2)]){
                case '1':case '4':
                    cout << " ";
                    break;
                case '2':case '3':case '5':case '6':
                case '7':case '8':case '9':case '0':
                    if(i % (s + 2) == 0){
                        cout << " ";
                    } else if(i % (s + 2) == s + 1){
                        cout << " ";
                    } else {
                        cout << "-";
                    }
                    break;
            }
            if(i % (s + 2) == s + 1 && i / (s + 2) != aux- 1) cout << " ";
        }
        cout << endl;
        
        loop(k, s){
            loop(i, aux){
                switch(n[i]){
                    case '2':case '3':case '7':case '1':
                        loop(j, s + 2){
                            if(j != s + 1) cout << " ";
                            else cout << "|";
                        }
                        break;
                    case '5':case '6':
                        loop(j, s + 2){
                            if(j != 0)
                               cout << " ";
                            else
                                cout << "|";
                        }
                        break;
                    case '4':case '8':case '9':case '0':
                        loop(j, s + 2){
                            if(j == 0 || j == s + 1)
                                cout << "|";
                            else
                               cout << " ";
                        }
                        break;
                }
                if(i != aux- 1)
                   cout << " ";
            }
            cout << endl;
        }
        loop(i, (s + 2) * aux){
            switch(n[i / (s + 2)]){
                case '1':case '7':case '0':
                   cout << " ";
                    break;
                case '2':case '3':case '4':case '5':case '6':
                case '8':case '9':
                    if(i % (s + 2) == 0){
                       cout << " ";
                    } else if(i % (s + 2) == s + 1){
                       cout << " ";
                    } else {
                        cout << "-";
                    }
                    break;
            }
            if(i % (s + 2) == s + 1 && i / (s + 2) != aux- 1)
               cout << " ";
        }
        cout << endl;
        
        loop(k, s){
            loop(i, aux){
                switch(n[i]){
                    case '3':case '4':case '5':case '7':
                    case '9':case '1':
                        loop(j, s + 2){
                            if(j != s + 1)
                               cout << " ";
                            else
                                cout << "|";
                        }
                        break;
                    case '2':
                        loop(j, s + 2){
                            if(j != 0)
                               cout << " ";
                            else
                                cout << "|";
                        }
                        break;
                    case '6':case '8':case '0':
                        loop(j, s + 2){
                            if(j == 0 || j == s + 1)
                                cout << "|";
                            else
                               cout << " ";
                        }
                        break;
                }
                if(i != aux- 1)
                   cout << " ";
            }
            cout << endl;
        }
        
        loop(i, (s + 2) * aux){
            switch(n[i / (s + 2)]){
                case '1':case '4':case '7':
                   cout << " ";
                    break;
                case '2':case '3':case '5':case '6':
                case '8':case '9':case '0':
                    if(i % (s + 2) == 0){
                       cout << " ";
                    } else if(i % (s + 2) == s + 1){
                       cout << " ";
                    } else {
                        cout << "-";
                    }
                    break;
            }
            if(i % (s + 2) == s + 1 && i / (s + 2) != aux - 1)
               cout << " ";
        }
        cout << endl << endl;
    }
    
    return 0;
}