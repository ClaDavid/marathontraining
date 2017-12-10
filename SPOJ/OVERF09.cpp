#include <iostream>

using namespace  std;

int main(){
    
    int N, P, Q, res;
    char C;
    
    cin >> N >> P >> C >> Q;
    
    if(C == '+'){
        res = P + Q;
    } else res = P*Q;
    
    if(res > N) cout << "OVERFLOW";
    else cout << "OK";
    
    return 0;
}