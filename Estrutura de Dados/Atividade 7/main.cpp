#include <iostream>

using namespace std;

struct no{
    int dado;
    struct no *prox;
};

struct no *lista = NULL;
int tamanho = 0;

void insereLista(int valor, int posicao){
    struct no *atual, *novo;
    if(posicao < 0 || posicao > tamanho){
        cout << "Posicao Invalida" << endl;
        return;
    }
    novo = new (struct no);
    novo -> dado = valor;
    if(posicao == 0){
        novo -> prox = lista;
        lista = novo;
    }else{
        atual = lista;
        for(int i = 0; i < posicao - 1; i++){
            atual = atual -> prox;
        }
        novo -> prox = atual -> prox;
        atual -> prox = novo;
    }
    tamanho ++;
}

void recuperaLista(int posicao){
    no *atual;
    if(lista == NULL){
        cout << "Lista Vazia." << endl;
        return;
    }
    atual = lista;
    for(int i = 0; i < posicao; i++){
            atual = atual -> prox;
        }
    cout << "O valor da posicao " << posicao << " e " << atual -> dado << endl;
}

void removePosicao(int posicao){
    no *atual, *apaga;
    if(lista == NULL){
        cout << "Lista Vazia." << endl;
        return;
    }
    atual = lista;
    if(posicao == 0){
        apaga = lista;
        lista = lista -> prox;
    }else{
    for(int i = 0; i < posicao - 1; i++){
            atual = atual -> prox;
        }
    apaga = atual -> prox;
    atual -> prox = apaga -> prox;
    }
    delete(apaga);
    tamanho --;
    cout << "Elemento Removido" << endl;
}

void buscaLista(int valor){
    no *atual;
    if(lista == NULL){
        cout << "Lista Vazia." << endl;
        return;
    }
    atual = lista;
    for(int i = 0; i < tamanho; i++){
            if (atual -> dado == valor){
                cout << "O valor " << valor << " esta na posicao " << i << endl;
                return;
            }
            atual = atual -> prox;
        }
    cout << "O valor selecionado nao esta na lista" << endl;
}

void imprime (){
    no *atual;
    if(lista == NULL){
        cout << "Lista Vazia." << endl;
        return;
    }
    atual = lista;
    while (lista != NULL){
        cout << atual -> dado << endl;
        atual = atual -> prox;
    }
}


int main()
{
    insereLista(10 , 0);
    insereLista(20 , 0);
    insereLista(30, 0);
    insereLista(67 , 0);

    buscaLista(10);

    return 0;
}
