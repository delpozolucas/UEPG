#include <iostream>

using namespace std;

const int TAM = 10;
int vetor[TAM + 1] = {5, 10, 37, 15, 9, 70, 32, 25, 13, 3};

void sequencial(int chave){
    int i;

    for(i = 0; i < TAM; i++){
        if(chave == vetor[i]){
            break;
        }
    }

    if(i == TAM){
        cout << "Nao encontrei" << endl;
    } else {
        cout << "Encontrei na posicao "<< i << endl;
    }
}

void sequencialSentinela(int chave){
    int i;
    vetor[TAM] = chave;
    for(i = 0;; i++){
        if(chave == vetor[i]){
            break;
        }
    }

    if(i == TAM){
        cout << "Nao encontrei" << endl;
    } else {
        cout << "Encontrei na posicao "<< i << endl;
    }
}

void sequencialTransp(int chave){
    int i;

    for(i = 0; i < TAM; i++){
        if(chave == vetor[i]){
            vetor[i] = vetor[i - 1];
            vetor[i - 1] = chave;
            break;
        }
    }

    if(i == TAM){
        cout << "Nao encontrei" << endl;
    } else {
        cout << "Encontrei na posicao "<< i << endl;
    }
}

void sequencialMovFrente(int chave){
    int i;

    for(i = 0; i < TAM; i++){
        if(chave == vetor[i]){
            if(i != 0){
                for(int y = i; y > 0; y--){
                    vetor[y] = vetor[y - 1];
                }
            vetor[0] = chave;
            }
            break;
        }
    }

    if(i == TAM){
        cout << "Nao encontrei" << endl;
    } else {
        cout << "Encontrei na posicao "<< i << endl;
    }
}

void imprime(){
    for(int i = 0; i < TAM; i++){
        cout << vetor[i] << endl;
    }
}

int main(){

    //sequencial(32);
    //sequencialSentinela(3);
    //sequencialTransp(9);
    sequencialMovFrente(9);
    imprime();


    return 0;
}