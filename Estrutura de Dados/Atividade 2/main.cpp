#include <iostream>
#include <string>

using namespace std;

const int TAM = 5;
int pilha [TAM], topo = -1;

void push (int valor){
    if(topo == TAM - 1){
        cout << "Pilha sem espaco" << endl;
    }else{
    topo ++;
    pilha[topo] = valor;
    }
}

bool vazia(){
    if(topo == -1){
        return true;
    }else{
        return false;
    }
}

void pop(){
    if(topo == -1){
        cout << "Pilha Vazia" << endl;
    }else{
    topo--;
    }
}

void topo2(){
    cout << "O valor do elemento do topo e: " << pilha[topo];
}

void imprime(){
    if(vazia() == true){
        cout << "Pilha Vazia";
    }
    for(int i= topo;i >-1; i--){
        cout << pilha[i] << endl;
}
}

void verifica(){
    string expresso;
    cin >> expresso;
    int i = 0;
    int tamanho = expresso.length();
    while (i < tamanho){
        if (expresso[i] == '('){
                push('(');
            }
        if(expresso[i] == ')'){
            if (vazia()){
            cout << "Expressao errada";
            return;
        }else{
            pop();
        }
    }
    i++;
    }

    if(vazia()){
        cout << "Expressao certa";
    }else{
        cout << "Expressao errada";
    }


    }


int main()
{
// Exercicio 1
    int valor;
    verifica();
    return 0;
}
