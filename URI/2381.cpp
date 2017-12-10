//lista de chamada
//Clarissa Simoyama David
//Para a ordenacao foi escolhido o metodo Radix Sort com Counting Sort.
//O algoritmo Radix Sort foi feito para Strings, baseado no Radix Sort
//para inteiros, que pode ser consultado em: http://www.geeksforgeeks.org/radix-sort/ .
//Em cada linha fora feita a analise de complexidade, e conclusoes finais estao
//no fim deste documento.

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <cstdio>
#include <algorithm>

using namespace std;

//o metodo getMax possui complexidade theta(n)
size_t getMax(string vetor[], int n){
    size_t max = vetor[0].size(); //theta(1)
    for (int i = 1; i < n; i++){ //theta(n)
        if (vetor[i].size() > max) //theta(n)
            max = vetor[i].size(); //O(1)
    }
    return max; //theta(1)
}

//o metodo countingSort possui complexidade theta(n)
void countingSort(string a[], int tamanho, size_t k){
    string *b = NULL; int *c = NULL; //theta(1)
    b = new string[tamanho]; //theta(1)
    c = new int[257]; //theta(1)

    for (int i = 0; i < 257; i++){ //valor constante
        c[i] = 0; //theta(1)
    }
    for (int j = 0; j <tamanho; j++){ //theta(n)
        c[k < a[j].size() ? (int)(unsigned char)a[j][k] + 1 : 0]++; //O(n)            
    }

    for (int f = 1; f <257; f++){ //valor constante
        c[f] += c[f - 1]; //theta(1)
    }

    for (int r = tamanho - 1; r >= 0; r--){ //theta(n)
        b[c[k < a[r].size() ? (int)(unsigned char)a[r][k] + 1 : 0] - 1] = a[r]; //O(n)
        c[k < a[r].size() ? (int)(unsigned char)a[r][k] + 1 : 0]--; //O(n)
    }

    for (int l = 0; l < tamanho; l++){ //theta(n)
        a[l] = b[l]; //theta(n)
    }

    delete[] b; //theta(1)
    delete[] c; //theta(1)
}

//o radixSort possui complexidade theta(n), importante notar que o metodo escolhido de ordenacao
//fora o countingSort, tambem possuindo complexidade theta(n)
void radixSort(string b[], int r){
    size_t max = getMax(b, r); //theta(n)
    for (size_t digito = max; digito > 0; digito--){ //como digito é constante, temos theta(n)
        countingSort(b, r, digito - 1); //theta(n)
    }
}

//o metodo principal possui complexidade theta(n)
int main(){
    int N, K; //theta(1)
    
    cin >> N; //theta(1)
    string alunos_nomes[N]; //theta(1)
    cin >> K; //theta(1)
    
    K = K - 1; //theta(1)
    
    for(int i = 0; i < N; i++){ //theta(n)
        cin >> alunos_nomes[i]; //theta(1)
    }
    
    radixSort(alunos_nomes, (int)(sizeof(alunos_nomes) / sizeof(alunos_nomes[0]))); //theta(n)
    
    
    cout << alunos_nomes[K] << endl; //theta(1)
    

    
    return 0; //theta(1)
}

//pior caso: O(n); melhor caso: omega(n); caso medio: theta(n)
//em todos os casos a complexidade eh linear