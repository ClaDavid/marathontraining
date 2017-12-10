//festa de sao petersburgo
#include <iostream>
#include <cstdio>

using namespace std;

void remover(int matriz[][], int amigos[], int N, int K, int index)
{
	// coloca a quantidade de amigos de index para 0
	amigos[index] = 0

	// percorre todos para saber quem tem index como amigo
	for(int i = 0; i < N - 1; i++){

		// verifica se existe ligação (se index tem o i como amigo)
		if(matriz[index][i] != 0){

			// remove a ligação
			matriz[index][i] = matriz[i][index] = 0;

			// atualiza a quantidade de amigos do amigo de index,
			// ou seja, remoção do index da lista de amigos de i
			amigos[i]--;

			// verifica se "i" ficou com menos de K amigos
			// mesma coisa que existe na funcao principal
			if(amigos[i] > 0 && amigos[i] < K)
				remover(matriz[][], amigos[], N, K, i)
		}
	}
}


main(){
	
	int N, K;
	cin >> N;
	cin >> K;

	obtém as entradas da matriz contando a quantidade de amigos
		matriz[x - 1][y - 1] = 1
		matriz[y - 1][x - 1] = 1
		amigos[x - 1]++
		amigos[y - 1]++

	se K == 0 // caso do número de amigos mínimo for 0, então todo mundo está convidado
		imprime todos (1 até N)
	senão

		// remove quem não pode ser convidado
		para i = 0 até N - 1
			se amigos[i] > 0 E amigos[i] < K
				remove(matriz, amigos, N, K, i)

		// imprime todos que possuem quantidade de amigos > 0
		// cuidado: não pode haver espaço em branco depois do último
		para i = 0 até N - 1
			se amigos[i] > 0
				imprime (i + 1)
}