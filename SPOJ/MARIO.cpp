#include <iostream>
#include <vector>
#include <algorithm>
#define loop(x, var) for(int x = 0; x < var; ++x)

using namespace std;

int main(){
	
	int armarioNecessario, armarioDisponivel;

	while((cin >> armarioNecessario >> armarioDisponivel) &&
			armarioNecessario != 0 && armarioDisponivel != 0){
		
		vector<int> v(armarioDisponivel);

		loop(i, armarioDisponivel) cin >> v[i];
		
		int mov = armarioNecessario;
		vector<int>::iterator ite;

		loop(i, armarioDisponivel){
			ite = upper_bound(v.begin() + i, v.end(), v[i] + armarioNecessario - 2);

			if(ite == v.end())
				mov = min(mov, armarioNecessario - (armarioDisponivel - i));
			else{
				int j = ite - v.begin();
				if(v[j] == v[i] + armarioNecessario - 1)
					mov = min(mov, armarioNecessario - (j - i + 1));
				else
					mov = min(mov, armarioNecessario - (j - i));
			}
		}
		cout << mov << endl;
	}
	return 0;
}