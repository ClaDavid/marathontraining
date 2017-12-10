//lucro
#include <iostream>
#include <cstdio>

using namespace std;

int receita[51];

main(){
	int n, custoPorDia, x, lucroMax, lucro, i;
	

	while(scanf("%d", &n) == 1){
	
		cin >> custoPorDia;
		lucroMax = 0, lucro = 0;

		for(i = 0; i < n; i++){
			cin >> x;
			receita[i] = x - custoPorDia;
		}
		
		for(i = 0; i < n; i++){
			lucro += receita[i];
			if(lucro < 0)
				lucro = 0;
			if(lucroMax < lucro)
				lucroMax = lucro;
		}
		
		cout << lucroMax << endl;
	}

	return 0;
}