//media 2
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    double notaA, notaB, notaC, media;
    
    cin >> notaA >> notaB >> notaC;
    
    media = (2*notaA + 3*notaB + 5*notaC)/10;
    
    cout << "MEDIA = " << fixed << setprecision(1) << media << endl;
    
    return 0;
}