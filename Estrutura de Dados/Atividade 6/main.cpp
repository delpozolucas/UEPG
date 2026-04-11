#include <iostream>

using namespace std;

struct no{
    int dado;
    struct no *prox;
};

struct no *pilha = NULL;

void push(int valor){
    struct no *novo;
    novo = new(struct no);
    novo -> dado = valor;
    novo -> prox = pilha;
    pilha = novo;
    cout << "Elemento Inserido." << endl;
}

void pop(){
    struct no *apaga;
    if(pilha == NULL){
        cout << "Pilha Vazia." << endl;
        return;
    }
    apaga = pilha;
    pilha = pilha -> prox;
    delete apaga;
}

void topo(){
    if(pilha == NULL){
        cout << "Pilha Vazia." << endl;
        return;
    }
    int i = pilha -> dado;
    cout << "O valor do topo e " << i << endl;
}

void imprime(){
    if(pilha == NULL){
        cout << "Pilha Vazia." << endl;
        return;
    }
    while (pilha != NULL){
        int i = pilha -> dado;
        cout << i << endl;
        pilha = pilha -> prox;
    }
}

int main()
{
    push(10);
    push(30);
    push(20);
    pop();
    push(67);
    topo();
    imprime();

    return 0;
}
