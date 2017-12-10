//Estradas Escuras
// Clarissa Simoyama David - RA: 131710231

#include <iostream>
#include <algorithm>
#include <vector>
#define NMAX 200000

using namespace std;

struct aresta{
    int origem;
    int destino;
    int metros;
};

int p[NMAX];

bool comparator(aresta a, aresta b){
    return a.metros < b.metros;
}

int findset(int x){
    if(p[x] != x) p[x] = findset(p[x]);
    return p[x];
}

int unionset(int x, int y){
    if(findset(x) == findset(y)) return false;
    p[findset(x)] = findset(y);
    return true;
}

int main(){
    int n, m;
    
    while(cin >> n >> m && (n && m) != 0){
        vector<aresta> arestas(m);
        for(auto &i: arestas) cin >> i.origem >> i.destino >> i.metros;
        for(int i = 0; i < n; ++i) p[i] = i;
        std::sort(arestas.begin(), arestas.end(), comparator);
        int cont = 0;
        for(auto &i: arestas){
            if(!unionset(i.destino, i.origem)) cont += i.metros;
        }
        cout << cont << endl;
    }
    
    return 0;
}