#include <iostream>

using namespace std;
const int TAM = 6;
int lista [TAM];
int tamanho = 0;

void insereLista(int valor){
    if(tamanho == TAM){
        cout << "Lista cheia" << endl;
        return;
    }

    if(tamanho == 0){
        lista[0] = valor;
        tamanho++;
        cout << "Valor inserido" << endl;
        return;
    }

    for (int i = tamanho; i > 0; i--){
        if(valor >= lista[i - 1]){
            lista[i] = valor;
            tamanho++;
            cout << "Valor inserido" << endl;
            return;
        }else{
            lista[i] = lista[i - 1];
        }
    }
    lista[0] = valor;
    tamanho++;
    cout << "Valor inserido" << endl;
}

void recuperaLista(int posicao){
    if (tamanho == 0){
        cout << "Lista Vazia" << endl;
        return;
    }
    if (posicao > tamanho - 1){
        cout << "Posicao invalida" << endl;
        return;
    }
    cout << "O valor na posicao "<< posicao << " e " << lista[posicao] << endl;
}

void removeLista(int posicao){
    if (tamanho == 0){
        cout << "Lista Vazia" << endl;
        return;
    }
    if (posicao > tamanho - 1){
        cout << "Posicao invalida" << endl;
        return;
    }
    for (int i = posicao ; i < tamanho; i++){
    lista[i] = lista[i + 1];
    }
    tamanho--;
    cout << "Valor Removido" << endl;
}

void buscaLista(int valor){
   if (tamanho == 0){
        cout << "Lista Vazia" << endl;
        return;
    }
    for (int i = tamanho - 1; i >= 0; i--){
        if (lista[i] == valor){
            cout << "O valor " << valor << " esta na posicao " << i << endl;
            return;
        }
    }
    cout << "O valor " << valor << " nao foi encontrado na lista" << endl;
}

void imprime(){
    if (tamanho == 0){
        cout << "Lista Vazia" <<endl;
        return;
    }
    for (int i = 0; i < tamanho; i++){
        cout << lista[i] <<endl;
    }
}

int main(){

    insereLista(10);
    insereLista(11);
    insereLista(8);
    insereLista(33);
    insereLista(14);

    imprime();

    recuperaLista(3);

    removeLista(2);

    buscaLista(8);

    imprime();

    return 0;
}