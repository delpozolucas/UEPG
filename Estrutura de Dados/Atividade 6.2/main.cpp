#include <iostream>

using namespace std;

struct no {
    int dado;
    struct no *prox;
};

struct no *inicio = NULL;
struct no *fim = NULL;

void enqueue(int valor){
    struct no *novo;
    novo = new(struct no);
    novo -> dado = valor;
    novo -> prox = NULL;
    if (inicio == NULL){
        inicio = novo;
    }else{
    fim -> prox = novo;
    }
    fim = novo;
    cout << "Elemento Inserido." << endl;
}

void dequeue(){
    struct no *apaga;
    if(inicio == NULL){
        cout << "Fila Vazia." << endl;
        return;
    }
    apaga = inicio;
    inicio = inicio -> prox;
    delete apaga;
    cout << "Elemento removido" << endl;
}

void iniciofila(){
    if(inicio == NULL){
        cout << "Fila Vazia." << endl;
        return;
    }
    cout << "O valor do Inicio e " << inicio -> dado << endl;
}

void imprime(){
    no *atual;
    if(inicio == NULL){
        cout << "Fila Vazia." << endl;
        return;
    }
    atual = inicio;
    while (atual != NULL){
        cout << atual -> dado << endl;
        atual = atual -> prox;
    }
}

int main()
{
    enqueue(67);
    enqueue(68);
    enqueue(69);
    enqueue(10);
    dequeue();
    imprime();

    return 0;
}
