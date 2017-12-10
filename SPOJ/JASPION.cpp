#include <iostream>
#include <sstream>
#include <string>
#include <map>
#define loop(x, var) for(int x = 0; x < var; ++x)

using namespace std;

int main(){
	int T, numPalavras, numLinhas;

	cin >> T;

	while(T--){
		cin >> numPalavras >> numLinhas;
		map<string, string> dict;
		string japones, portugues;
		cin.ignore(1);	

		loop(i, numPalavras){
			getline(cin, japones);
			getline(cin, portugues);
			dict[japones] = portugues;
		}

		loop(i, numLinhas){
			getline(cin, portugues);
			istringstream iss(portugues);			

			while(iss >> portugues){							
				if(dict.find(portugues) != dict.end())
					cout << dict[portugues] << " ";
				else
					cout << portugues  << " ";
			}

			cout << endl;
		}
		
		cout << endl;
	}
}