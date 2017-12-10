//Minesweeper
#include <iostream>
#include <cstring>

using namespace std;

#define MAXSIZE 110
#define loop(x, var) for(int x = 1; x <= var; x++) 

int main() {
    int n, m, aux = 1;
    char tabuleiro[MAXSIZE][MAXSIZE];

    while (cin >> n >> m && (n || m)) {
        memset(tabuleiro, '.', MAXSIZE*MAXSIZE);
        loop(i, n){
            loop(j, m){
                cin >> tabuleiro[i][j];
                if (tabuleiro[i][j] == '\n') j--;
            }
        }

        if (aux == 1) {
            cout << "Field #" << aux++ << ":" << endl;
        } else {
            cout << endl << "Field #" << aux++ << ":" << endl;
        }

        loop(i, n) {
            loop(j, m) {
                if (tabuleiro[i][j] == '*') {
                    cout << "*";
                } else {
                    int cont = (tabuleiro[i - 1][j - 1] == '*') 
                             + (tabuleiro[i - 1][j] == '*') 
                             + (tabuleiro[i - 1][j + 1] == '*') 
                             + (tabuleiro[i][j - 1] == '*') 
                             + (tabuleiro[i][j + 1] == '*') 
                             + (tabuleiro[i + 1][j - 1] == '*') 
                             + (tabuleiro[i + 1][j] == '*') 
                             + (tabuleiro[i + 1][j + 1] == '*');
                    cout << cont;
                }
            }
            cout << endl;
        }
    }
    
    return 0;
}