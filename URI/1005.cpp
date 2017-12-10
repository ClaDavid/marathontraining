//media 1
#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    
    double a, b, media;
    
    cin >> a;
    cin >> b;
    
    media = ((a*3.5) + (b*7.5))/11;
    
    printf("MEDIA = %.5lf\n", media);
    
    return 0;
}