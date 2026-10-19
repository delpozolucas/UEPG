#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

const int TAM = 20000;

int vetor[TAM];

struct no {
    int dado;
    struct no *esq;
    struct no *dir;
    int bal;
};

struct no *raiz = NULL, *raizAVL = NULL;

void gera(int ord) {
    long i;

    switch (ord) {
    case 1:
        cout << "Gerando vetor ordenado...." << endl;
        for (i=0; i<TAM; i++)
            vetor[i]=i;
        break;
    case 2:
        cout << "Gerando vetor inversamente ordenado...." << endl;
        for (i=0; i<TAM; i++)
            vetor[i]=TAM-1-i;
        break;
    default:
        cout << "Gerando vetor randomico...." << endl;
        for (i=0; i<TAM; i++)
            vetor[i]=(rand()%TAM*10);
    }
}

int main() {

    gera(0);

}