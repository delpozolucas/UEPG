#include <iostream>
using namespace std;

struct no{
    int dado;
    struct no *prox;
};

struct no *lista = NULL;
int tamanho = 0;

void insereLista(int valor){
    struct no *atual, *novo;
    novo = new (struct no);
    novo -> dado = valor;

    if(lista == NULL){
        lista = novo;
        tamanho++;
        cout << "Valor inserido" << endl;
        return;
    }

    if(valor < lista -> dado){
        novo -> prox = lista;
        lista = novo;
    }else{
        atual = lista;
        while (atual -> prox != NULL && valor > atual -> prox -> dado){
            atual = atual -> prox;
        }
        novo -> prox = atual -> prox; 
        atual -> prox = novo;
    }
    tamanho++;
    cout << "Valor inserido" << endl;
}

void recuperaLista(int posicao){
    no *atual;
    if(lista == NULL){
        cout << "Lista Vazia." << endl;
        return;
    }
    if(posicao < 0 || posicao >= tamanho){
        cout << "Posicao Invalida" << endl;
        return;
    }
    atual = lista;
    int c = 0;
    while (c != posicao){
        atual = atual -> prox;
        c++;
    }
    cout << "O dado na posicao " << posicao << " e " << atual -> dado << endl;
}

void removeLista(int posicao){
    no *atual, *apaga;
    if(lista == NULL){
        cout << "Lista Vazia." << endl;
        return;
    }
    if(posicao < 0 || posicao >= tamanho){
        cout << "Posicao Invalida" << endl;
        return;
    }
    atual = lista;
    if(posicao == 0){
        apaga = lista;
        lista = lista -> prox;
        delete(apaga);
        tamanho--;
        cout << "Valor removido" << endl;
        return;
    }
    int c = 0;
    while (c != posicao - 1){
        atual = atual -> prox;
        c++;
    }
    apaga = atual -> prox;
    atual -> prox = atual -> prox -> prox;
    delete(apaga);
    tamanho--;
    cout << "Valor removido" << endl;
}

void buscaLista(int valor){
    no *atual;
    if(lista == NULL){
        cout << "Lista Vazia." << endl;
        return;
    }
    atual = lista;
    int c = 0;
    while (atual != NULL && atual -> dado <= valor){
        if (atual -> dado == valor){
            cout << "O valor " << valor << " esta na posicao " << c << endl;
            return;
        }
        atual = atual -> prox;
        c++;
    }
    cout << "Valor nao encontrado na lista" << endl;
}

void imprime(){
    no *atual;
    if(lista == NULL){
        cout << "Lista Vazia." << endl;
        return;
    }
    atual = lista;
    while (atual != NULL){
        cout << atual -> dado << endl;
        atual = atual -> prox;
    }
}

int main(){
    insereLista(20);
    insereLista(8);
    insereLista(7);
    insereLista(13);

    imprime();

    buscaLista(67);

    return 0;
}