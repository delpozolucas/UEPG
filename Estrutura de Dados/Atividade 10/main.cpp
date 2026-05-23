#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int TAM = 4000;

int vetor[TAM];    /* Vetor */
int scratch[TAM];

// Gera três tipos de vetores:
// ord->0 gera vetor randômico
// ord->1 gera vetor ordenado
// ord->2 gera vetor inversamente ordenado
// Qualquer outro valor de ord vai gerar um vetor randômico

void insertion_sort(){
    int i, x, temp;
    bool found;
    for(int k = 1; k <= TAM - 1; k++){
        x = vetor[k];
        i = k - 1;
        found = false;
        while(!found && i >= 0){
            if (vetor[i] > x){
                temp = vetor[i + 1];
                vetor[i + 1] = vetor[i];
                vetor[i] = temp;
                i--;
            } else {
                found = true;
            }
        }
    }
}

void shell_sort(){
    int k = 1, j, temp;
    bool found;
    do {
        k = (k * 2) + 1;
    } while (k < TAM);
    do {
        k = k / 2;
        for(int i = k; i <= TAM - 1; i++){
            j = i - k;
            found = false;
            while (j >= 0 && !found){
                if (vetor[j] > vetor[j + k]){
                    temp = vetor[j]; 
                    vetor[j] = vetor [j + k];
                    vetor[j + k] = temp;
                    j = j - k;
                } else {
                    found = true;
                }
            }
        }
    } while (k != 1);  
}

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

void imprime()
{
    if (TAM == 0)
    {
        cout << "Vetor vazio." << endl;
        return;
    }
    for (int i = 0; i < TAM; i++)
    {
        cout << i + 1 << "- " << vetor[i] << endl;
    }
}

int main() {

    clock_t tempo1;
    clock_t tempo2;

    gera(0);
    tempo1 = clock();
    //insertion_sort();
    shell_sort();
    tempo2 = clock() - tempo1;
    cout << "Tempo: " << (float) tempo2/CLOCKS_PER_SEC << " s" << endl;
    //imprime();
}