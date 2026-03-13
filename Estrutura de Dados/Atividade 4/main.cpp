#include <iostream>

using namespace std;

const int TAM = 6;
int lista [TAM];
int tamanho = 0;

void inserelista(int valor, int posicao){
    int i;
    if(posicao < 0 || posicao > tamanho){
        cout << "Posicao invalida" << endl;
        return;
    }
    if (tamanho == TAM){
        cout << "Lista cheia" << endl;
        return;
    }
    for(i = tamanho; i> posicao; i--){
            lista[i] = lista[i - 1];
        }
    lista[posicao] = valor;
    tamanho ++;
    cout << "valor inserido" << endl;
}

void recuperalista(int posicao){
    if(posicao < 0 || posicao > tamanho){
        cout << "Posicao invalida" << endl;
        return;
    }
    cout << "O valor da posicao " << posicao << " e " << lista[posicao] << endl;
}

void removelista(int posicao){
    int i;
    if(posicao < 0 || posicao >= tamanho){
        cout << "Posicao invalida" << endl;
        return;
    }
    if (tamanho == TAM){
        cout << "Lista cheia" << endl;
        return;
    }
    for(i = posicao; i < tamanho; i++){
            lista[i] = lista[i + 1];
        }
    tamanho --;
    cout << "valor removido" << endl;
}

void buscalista(int valor){
    int z = 0;
    for (int i = 0; i < tamanho - 1; i++){
        if(valor == lista[i]){
        cout << "Esse valor esta na posicao " << i << endl;
        z++;
        }
    }
    if(z == 0){
        cout << "Esse valor nao esta na lista" << endl;
    }


}

void imprime(){
    if(tamanho == 0){
        cout << "Lista Vazia" << endl;
    }
    for(int i = 0; i < tamanho; i++){
        cout << lista[i] << endl;
    }
}



int main()
{
    inserelista(2,0);
    inserelista(3,1);
    inserelista(4,2);
    inserelista(67,3);
    inserelista(10,4);
    buscalista(67);
    recuperalista(2);
    removelista(1);
    imprime();

    return 0;
}
