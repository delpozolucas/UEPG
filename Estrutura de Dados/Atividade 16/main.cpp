#include <iostream>

using namespace std;

const int TAM = 5;

int vertice [TAM];
int adj[TAM][TAM];
int n_vertices = 0;

void inicia(){
    for (int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            adj[i][j] = 0;
        }
    }
}

void insereVertice(int valor){
    if(n_vertices < TAM){
        for(int i = 0; i < n_vertices; i++){
            if(valor == vertice[i]){
                cout << "Repetido";
                return;
            }
        }
        vertice[n_vertices] = valor;
        n_vertices++;
    } else {
        cout << "Grado cheio";
    }
}

void insereAresta(int origem, int destino){
    int i = 0, j = 0;
    while (i < n_vertices && vertice[i] != origem){
        i++;
    }
    if(i == n_vertices){
        cout << "Nao achei a origem";
        return;
    }
    while(j < n_vertices && vertice[j] != destino){
        j++;
    }
    if(j == n_vertices){
        cout << "Nao achei o destino";
        return;
    }
    adj[i][j] = 1;
}

void removeAresta(int origem, int destino){
    int i = 0, j = 0;
    while (i < n_vertices && vertice[i] != origem){
        i++;
    }
    if(i == n_vertices){
        cout << "Nao achei a origem";
        return;
    }
    while(j < n_vertices && vertice[j] != destino){
        j++;
    }
    if(j == n_vertices){
        cout << "Nao achei o destino";
        return;
    }
    if(adj[i][j] == 1){
        adj[i][j] = 0;
    } else {
        cout << "Aresta não existe";
    }
}

void haAresta(int origem, int destino){
    int i = 0, j = 0;
    while (i < n_vertices && vertice[i] != origem){
        i++;
    }
    if(i == n_vertices){
        cout << "Nao achei a origem";
        return;
    }
    while(j < n_vertices && vertice[j] != destino){
        j++;
    }
    if(j == n_vertices){
        cout << "Nao achei o destino";
        return;
    }
    if(adj[i][j] == 1){
        cout << "Aresta existe";
    } else {
        cout << "Aresta não existe";
    }
}

void imprimeGrafo(){
    cout << "\nGrafo e: " << endl;
    for (int i = 0; i < n_vertices; i++){
        cout << vertice[i] << " -> ";
        for (int j = 0; j < n_vertices; j++){
            if(adj[i][j] != 1){
                cout << "<" << vertice[i] << "," << vertice[j] << "> ";
            }
        }
        cout << endl;
    }
}