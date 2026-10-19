#include <iostream>

using namespace std;

const int TAM = 10;
struct no{
    int dado;
    struct no *prox;
};

struct no *tabela [TAM];

void inicia(){
    for (int i = 0; i < TAM; i++)
    {
        tabela[i] = NULL;
    }  
}

int espalha (int chave){
    return chave % TAM;
}

void insere (int chave){
    struct no *atual, *anterior, *novo;
    int pos;
    pos = espalha(chave);
    atual = tabela[pos];
    while(atual != NULL){
        if(atual -> dado == chave){
            cout << "Numero Repetido";
            return;
        }
        anterior = atual;
        atual = atual -> prox;
    }
    novo = new(struct no);
    novo -> dado = chave;
    novo -> prox = NULL;
    if (tabela[pos] == NULL){
        tabela[pos] = novo;
    }else{
        anterior -> prox = novo;
    }
}

void busca (int chave){
    struct no *atual;
    int pos;
    pos = espalha (chave);
    atual = tabela[pos];
    while (atual != NULL){
        if(atual -> dado == chave){
            cout << "achei a chave" << endl;
            return;
        }
        atual = atual -> prox;
    }
}

void imprime(){
    struct no *atual;
    for (int i = 0; i < TAM; i++){
        cout << i << "->";
        atual = tabela[i];
        while (atual != NULL){
            cout << atual -> dado << " ";
            atual = atual -> prox;
        }
        cout << endl;
    }
}

void apaga(int chave){
    int pos;
    struct no *atual, *anterior, *novo;

    pos = espalha (chave);
    atual = tabela[pos];
    while (atual != NULL){
        if (atual -> dado == chave){
            cout << "Numero encontrado";
            if(tabela [pos] == atual){
                tabela[pos] = atual -> prox; 
            } else {
                anterior -> prox = atual -> prox;
            }
            delete(atual);
            return;
        }
        anterior = atual;
        atual = atual -> prox;
    }
    cout << "Numero nao encontrado" << endl;
}

int main(){
    insere(10);
    insere(20);
    insere(11);
    insere(55);
    insere(34);
    imprime();
    apaga(11);
    imprime();


    return 0;
}