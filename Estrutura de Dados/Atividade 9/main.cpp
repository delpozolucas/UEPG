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

void selection_sort(){
    int temp, corrente;
    for(int i = 0; i <= TAM - 2; i++){
        corrente = i;
        for(int j = i + 1; j <= TAM - 1; j++){
            if(vetor[corrente] > vetor[j]){
                corrente = j;
            }
        }
        temp = vetor[i];
        vetor[i] = vetor[corrente];
        vetor[corrente] = temp; 
    }
}

void merge_sort(int lo, int hi){
    int mid, L, H;
    if (lo < hi){
        mid = (lo + hi) / 2;
        merge_sort(lo, mid);
        merge_sort(mid + 1, hi);
        L = lo;
        H = mid + 1;
        for(int k = lo; k <= hi; k++){
            if(L <= mid && (H > hi || vetor[L] < vetor[H])){
                scratch[k] = vetor[L];
                L++;
            } else {
                scratch[k] = vetor[H];
                H++;
            }
        }
        for (int  k = lo; k <= hi; k++)
        {
            vetor[k] = scratch[k];
        }
        
    }
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
    //selection_sort();
    merge_sort(0, TAM - 1);
    tempo2 = clock() - tempo1;
    cout << "Tempo: " << (float) tempo2/CLOCKS_PER_SEC << " s" << endl;
    //imprime();
}