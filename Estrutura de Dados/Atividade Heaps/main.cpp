#include <iostream>
#include <fstream>

using namespace std;

const int TAM = 10;
int heap[TAM];

int tamanho = 0;

void heapfy(int pos) {

    int esq, dir, maior, temp;

    esq=2*pos+1;
    dir=2*pos+2;
    if (esq < tamanho && heap[esq] > heap[pos])
        maior=esq;
    else
        maior=pos;
    if (dir < tamanho && heap[dir] > heap[maior])
        maior=dir;
    if (maior!=pos) {
        temp = heap[maior];
        heap[maior] = heap[pos];
        heap[pos] = temp;
        heapfy(maior);
    }
}

void insereHeap (int valor){
    int i;
    if (tamanho == TAM){
        cout << "O vetor esta cheio" << endl;
        return;
    }
    heap[tamanho] = valor;
    i = tamanho;  
    while (i > 0 && valor > heap[(i - 1) / 2]) {
        heap[i] = heap[(i - 1)/2];
        i = (i - 1)/2;
    }
    heap[i] = valor;
    tamanho++;
    cout << "Valor inserido" << endl;
}

void maiorHeap(){
    if (tamanho == 0){
        cout << "O vetor esta vazio" << endl;
        return;
    }
    cout << "O maior valor da Heap é " << heap[0] << endl;
}

void removeMaior(){
    if (tamanho == 0){
        cout << "O vetor esta vazio" << endl;
        return;
    }
    heap[0] = heap[tamanho - 1];
    tamanho--;
    heapfy(0);
}

int main() {
    
    ifstream arquivo("numeros.txt");

    if (!arquivo.is_open()) {
        cout << "Erro ao abrir o arquivo." << endl;
        return 1;
    }

    int num;

    while (arquivo >> num) {
        insereHeap(num);
    }

    arquivo.close();

    cout << "Tres maiores numeros:" << endl;

    for (int i = 0; i < 3 && tamanho > 0; i++) {
        cout << heap[0] << endl;
        removeMaior();             
    }

    return 0;
}