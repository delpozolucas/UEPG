#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int TAM = 20;

int vetor[TAM]; /* Vetor */

// Gera três tipos de vetores:
// ord->0 gera vetor randômico
// ord->1 gera vetor ordenado
// ord->2 gera vetor inversamente ordenado
// Qualquer outro valor de ord vai gerar um vetor randômico

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

void gera(int ord)
{
    long i;

    switch (ord)
    {
    case 1:
        cout << "Gerando vetor ordenado...." << endl;
        for (i = 0; i < TAM; i++)
            vetor[i] = i;
        break;
    case 2:
        cout << "Gerando vetor inversamente ordenado...." << endl;
        for (i = 0; i < TAM; i++)
            vetor[i] = TAM - 1 - i;
        break;
    default:
        cout << "Gerando vetor randomico...." << endl;
        for (i = 0; i < TAM; i++)
            vetor[i] = (rand() % TAM * 10);
    }
}

int main()
{

    clock_t tempo1;
    clock_t tempo2;

    gera(0);
    tempo1 = clock();
    // bubbleSort();
    quickSort(0, TAM - 1);
    tempo2 = clock() - tempo1;
    cout << "Tempo: " << (float)tempo2 / CLOCKS_PER_SEC << " s" << endl;
    imprime();
}