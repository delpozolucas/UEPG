#include <iostream>

using namespace std;
const int TAM = 4;
int fila[TAM], inicioF = 0, fimF = 0, contador = 0;

void enqueue(int valor){
    if(contador == TAM){
        cout << "Fila sem espaço" << endl;
        return;
    }
    contador++;
    fila[fimF] = valor;
    fimF++;
    if(fimF == TAM){
        fimF = 0;
    }
}

void dequeue(){
    if (contador == 0){
        cout << "Fila vazia" << endl;
        return;
    }
    contador--;
    if(fimF == TAM - 1){
    inicioF = 0;
    }else{
        inicioF++;
        cout << "Valor Removido" << endl;
    }

}

void inicio(){
    if (contador == 0){
        cout << "Fila vazia" << endl;
        return;
    }
    cout << "o valor do inicio da fila e " << fila[inicioF] << endl;
}

bool vazia(){
    if (contador == 0){
        return true;
    }
}

void imprime(){
    if (contador == 0){
        cout << "Fila vazia" << endl;
        return;
    }
    bool flag = true;
    int i = inicioF;
    while(flag){
        cout << fila[i] << endl;
        i++;
        if(i == TAM){
            i = 0;
        }
        if(i == fimF){
            flag = false;
        }
    }
}

// Bônus

void dequeueEnd(){
    if (contador == 0){
        cout << "Fila vazia" << endl;
        return;
    }
    contador--;
    if(fimF == 0){
    fimF = TAM - 1;
    }else{
        fimF++;
        cout << "Valor Removido" << endl;
    }

}

void enqueueFront(int valor){
    if(contador == TAM){
        cout << "Fila sem espaço" << endl;
        return;
    }
    contador++;
    inicioF--;
    fila[inicioF] = valor;
}

void fim(){
    if (contador == 0){
        cout << "Fila vazia" << endl;
        return;
    }
    if(fimF == 0){
        cout << "o valor do fim da fila e " << fila[TAM-1]<< endl;
    }else{
        cout << "o valor do fim da fila e " << fila[fimF-1]<< endl;
    }
}

int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueueFront(67);
    imprime();
    inicio();
    fim();
    cout << "o contador esta em " << contador << endl;

    return 0;
}
