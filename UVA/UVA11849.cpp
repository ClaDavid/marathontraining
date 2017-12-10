//CD
#include <iostream>
#include <map>

using namespace std;

#define loop(x, var) for(int x = 0; x < var; x++)

int main(){
    
    int n, m, cd;
    
    while(cin >> n >> m && (n || m)){
        
        int count = 0;
        map<int, int> mp;
 
        loop(i, n){
            cin >> cd;
            mp[cd] = 1;
        }
 
        loop(i, m){
            cin >> cd;
            if(mp[cd] == 1) count++;
        }
        cout << count << endl;
        
        mp.clear();
    }
    return 0;
}