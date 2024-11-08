#include<iostream>
#include <time.h>

using namespace std;

int main (){
    cout << "Bem vindo ao Jogo da Adivinhação!" << endl << endl;


    srand(time(NULL));
    const int numero_secreto = rand() % 100;
    int chute, tentativa;
    
    while(1) {

        cout << "Digite um número: ";
        scanf("%d", &chute);
        
        if (chute > numero_secreto){
            cout << chute << " é maior que o número!" << endl << endl;
            tentativa++;
        } else if (chute < numero_secreto){
            cout << chute <<" é menor que o número!" << endl << endl;
            tentativa++;
        } else {
            break;
        }
    }

    cout << "Parabéns! Você acertou!" << endl;
    cout << "Número de tentativas:" << tentativa << endl;
}