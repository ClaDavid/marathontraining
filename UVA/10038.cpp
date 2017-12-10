//Jolly Jumpers
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

#define loop(x, var) for(unsigned x = 0; x < var; x++)
#define loop2(x2, var2) for(unsigned x2 = 1; x2 < var2; x2++)
#define loopit(iter, iterable) for(typeof((iterable).begin()) iter = (iterable).begin(); iter != (iterable).end(); ++iter)

int main(){

	int n, numero;

	while(cin >> n){
		vector<int> vet1, vet2, vet_auxiliar;
		
		loop(i, n){
			cin >> numero;
			vet1.push_back(numero);
		}
		
		if(n == 1){
			cout << "Jolly" << endl;
			continue;
		} 

		vet_auxiliar = vet1;
		vet_auxiliar.erase(vet_auxiliar.begin());

		loop(i, vet_auxiliar.size()){
			vet2.push_back(abs(vet1.at(i) - vet_auxiliar.at(i)));
		}

		sort(vet2.begin(), vet2.end());
		
		loop2(i, n){

			vector <int>::iterator ite;
			ite = find(vet2.begin(), vet2.end(), i);
	
			if( ite != vet2.end() ) {
				vet2.erase(vet2.begin());
			}
			else{
				cout << "Not jolly" << endl;
				break;
			}
		}
		if(vet2.empty()) cout << "Jolly" << endl;
	}
	return 0;
}