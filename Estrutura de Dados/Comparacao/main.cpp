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

// (a)

void bubbleSort()
{
    int pass, temp;
    bool sorted;
    pass = 1;
    sorted = false;
    while (!sorted && pass < TAM)
    {
        sorted = true;
        for (int i = 0; i <= TAM - pass - 1; i++)
        {
            if (vetor[i] > vetor[i + 1])
            {
                temp = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = temp;
                sorted = false;
            }
        }
        pass++;
    }
}

// (b)
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

//(c)

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

//(d)
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

//(e)
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

//(f)

int partition(int p, int r)
{
    int piv = vetor[p];
    int i = p - 1;
    int j = r + 1;
    int temp;
    while (true)
    {
        do
        {
            j--;
        } while (vetor[j] > piv);
        do
        {
            i++;
        } while (vetor[i] < piv);
        if (i < j)
        {
            temp = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = temp;
        }
        else
        {
            return j;
        }
    }
}

void quickSort(int p, int r)
{
    if (p < r)
    {
        int q = partition(p, r);
        quickSort(p, q);
        quickSort(q + 1, r);
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

    for(int m = 1; m <= 6; m++){
        gera(0);
        tempo1 = clock();
        switch (m)
        {
            case 1:
                bubbleSort();
                tempo2 = clock() - tempo1;
                cout << "Tempo Bubble Sort: " << (float) tempo2/CLOCKS_PER_SEC << " s" << endl;
                break;
    
            case 2:
                insertion_sort();
                tempo2 = clock() - tempo1;
                cout << "Tempo Insertion Sort: " << (float) tempo2/CLOCKS_PER_SEC << " s" << endl;
                break;
            case 3:
                selection_sort();
                tempo2 = clock() - tempo1;
                cout << "Tempo Selection Sort: " << (float) tempo2/CLOCKS_PER_SEC << " s" << endl;
                break;
            case 4:
                shell_sort();
                tempo2 = clock() - tempo1;
                cout << "Tempo Shell Sort: " << (float) tempo2/CLOCKS_PER_SEC << " s" << endl;
                break;
            case 5:
                merge_sort(0, TAM - 1);
                tempo2 = clock() - tempo1;
                cout << "Tempo Merge Sort: " << (float) tempo2/CLOCKS_PER_SEC << " s" << endl;
                break;
            case 6:
                quickSort(0, TAM - 1);
                tempo2 = clock() - tempo1;
                cout << "Tempo Quick Sort: " << (float) tempo2/CLOCKS_PER_SEC << " s" << endl;
                break;
            }
    }
}