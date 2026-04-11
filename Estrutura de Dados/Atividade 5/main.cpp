#include <iostream>

using namespace std;
const int TAM = 6;
int lista [TAM];
int tamanho = 0;

void insereLista(int valor){
    if (tamanho == TAM){
        cout << "A lista esta cheia" << endl;
        return;
    }
    if (tamanho == 0){
        lista[0] = valor;
        tamanho ++;
        return;
    }
    for (int i = tamanho; i >= 0; i--){
        if(valor >= lista [i - 1]){
            lista[i] = valor;
            tamanho++;
            return;
        }else{
            lista[i] = lista[i - 1];
        }
    }
}

void recuperaLista(int posicao){
    if (tamanho == 0){
        cout << "A lista esta vazia" << endl;
        return;
    }
    if (posicao > tamanho){
        cout << "A posicao e invalida" << endl;
        return;
    }
    cout << lista[posicao] << endl;
}

void removeValor(int valor){
    int quantidade = 1;
    if (tamanho == 0){
        cout << "A lista esta vazia" << endl;
        return;
    }
    for(int i = 0; i < tamanho; i++){
        if(valor == lista[i]){
                for(int z = i + 1; z < tamanho; z++){
                if (lista [i] == lista[z]){
                    quantidade++;
                }
            }
            for(int j = i + quantidade; j <= tamanho - 1; j++){
                lista [j - quantidade] = lista[j];
            }
            tamanho -=quantidade;
                }
        }
    }


void buscaLista(int valor){
    int z = 0;
    if (tamanho == 0){
        cout << "A lista esta vazia" << endl;
        return;
    }
    for(int i = 0; i < tamanho && valor >= lista[i]; i++){
        if(valor == lista[i]){
            cout << "O valor " << valor << " esta na posicao " << i << endl;
            z = 1;
        }
    }
    if(z == 1){
        return;
    }else{
    cout << "Valor nao encontrado" << endl;
    return;
    }
}

void imprime(){
    if (tamanho == 0){
        cout << "A lista esta vazia" << endl;
        return;
    }
    for(int i = 0; i < tamanho; i++){
        cout << lista[i] << endl;
    }
}

void repetidoLista(){
    if (tamanho == 0){
        cout << "A lista esta vazia" << endl;
        return;
    }
    for(int i = 0; i < tamanho; i++){
        if(lista[i] == lista [i + 1]){
            cout << "Tem valores repetidos" << endl;
            return;
        }
    }
    cout << "Nao tem valores repetidos" << endl;
            return;
}

int main()
{
    insereLista(7);
    insereLista(6);
    insereLista(6);
    insereLista(6);
    insereLista(1);

    removeValor(6);
    imprime();

    return 0;
}
