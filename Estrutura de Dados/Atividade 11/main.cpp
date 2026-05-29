#include <iostream>

using namespace std;

struct no{
    int dado;
    struct no *esq;
    struct no *dir;
};

struct no *raiz = NULL;

void insereArvore(int valor){
    struct no *novo, *atual, *anterior;
    novo = new (struct no);
    novo -> dado = valor;
    novo -> esq = NULL;
    novo -> dir = NULL;
    if(raiz == NULL){
        raiz = novo;
        cout << "Valor inserido" << endl;
        return;
    }
    atual = raiz;
    while (atual != NULL){
        anterior = atual;
        if(valor < atual -> dado){
            atual = atual -> esq;
        } else {
            atual = atual -> dir;
        }
        
    }
    if (valor < anterior -> dado){
        anterior -> esq = novo;
    } else {
        anterior -> dir = novo;
    }
    cout << "Valor inserido" << endl;
}

void insereArvoreSemRepetidos(int valor){
    struct no *novo, *atual, *anterior;
    novo = new (struct no);
    novo -> dado = valor;
    novo -> esq = NULL;
    novo -> dir = NULL;
    if(raiz == NULL){
        raiz = novo;
        cout << "Valor inserido" << endl;
        return;
    }
    atual = raiz;
    while (atual != NULL){
        anterior = atual;
        if (valor == atual -> dado){
            cout << "Valor Repetido" << endl;
            return;
        }
        if(valor < atual -> dado){
            atual = atual -> esq;
        } else {
            atual = atual -> dir;
        }
        
    }
    if (valor < anterior -> dado){
        anterior -> esq = novo;
    } else {
        anterior -> dir = novo;
    }
    cout << "Valor inserido" << endl;
}

void buscaArvore(int valor){
    struct no *atual;
    atual = raiz;
    while (atual != NULL){
        if (valor == atual -> dado){
            cout << "Valor Encontrado" << endl;
            return;
        }
        if(valor < atual -> dado){
            atual = atual -> esq;
        } else {
            atual = atual -> dir;
        }
    }
    cout << "Valor não encontrado" << endl;
}

void imprimeMaior(){
    struct no *atual;
    if(raiz == NULL){
        cout << "Arvore Vazia" << endl;
        return;
    }
    atual = raiz;
    while (atual -> dir != NULL){
        atual = atual -> dir;
    }
    cout << "O maior valor da Arvore é: " << atual -> dado << endl;
}

void imprimeMenor(){
    struct no *atual;
    if(raiz == NULL){
        cout << "Arvore Vazia" << endl;
        return;
    }
    atual = raiz;
    while (atual -> esq != NULL){
        atual = atual -> esq;
    }
    cout << "O menor valor da Arvore é: " << atual -> dado << endl;
}

void em_ordem(struct no *atual){
    if (atual != NULL){
        em_ordem(atual -> esq);
        cout << atual -> dado << " ";
        em_ordem(atual -> dir);
    }
}



int main(){
    
    insereArvore(27);
    insereArvore(67);
    insereArvore(69);
    insereArvore(100);
    insereArvoreSemRepetidos(7);

    imprimeMaior();
    imprimeMenor();

    buscaArvore(7);

    em_ordem(raiz);

    return 0;
}