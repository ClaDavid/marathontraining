#include <iostream>
#include <vector>
#include <set>
#define loop(x, var) for(int x = 0; x < var; ++x)

using namespace std;

int main(){
	int n, primeiroNum, segundoNum;
	int teste = 1;

	while(cin >> n && n != 0){

		vector < set<int> > senha(6);
		
		loop(i, 6){
			loop(j, 10){
				senha[i].insert(j);
			}
		}
		
		while(n--){	
			
			vector < pair<int, int> > num;
			
			loop(i, 5){
				cin >> primeiroNum >> segundoNum;
				num.push_back(make_pair(primeiroNum, segundoNum));
			}
						
			char letra;
			
			loop(i, 6){
				cin >> letra;

				primeiroNum = num[letra - 'A'].first;
				segundoNum = num[letra - 'A'].second;

				set<int>::iterator ite = senha[i].begin();
				for (ite; ite != senha[i].end(); ++ite){
					if(*ite != primeiroNum && *ite != segundoNum)
						senha[i].erase(*ite);
				}
			}				
		}

		cout << "Teste " << teste++ << endl;
		loop(i, 6){
			set<int>::iterator ite = senha[i].begin();
			cout << *ite << " ";
		}
		cout << endl << endl;
	}
	return 0;
}