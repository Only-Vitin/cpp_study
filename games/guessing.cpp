#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std; 

int main(){
    srand(time(NULL));
    const int NUMERO_SECRETO = rand() % 101;

    int chute;
    int tentativas;
    double pontos;
    double pontos_perdidos;
    char nivel;

    cout << "*************************************" << endl;
    cout << "* Bem-vindos ao jogo da adivinhação *" << endl;
    cout << "*************************************" << endl;

    while(true){
        cout << "--------- Escolha o seu nível ---------" << endl;
        cout << "| (F) Fácil | (M) Médio | (D) Difícil |" << endl;
        cout << "---------------------------------------" << endl;
        cout << "Digite a letra respectiva: ";
        cin >> nivel;
        cout << endl << endl;

        if(nivel == 'F'){
            pontos = 1000.0;
            tentativas = 12;
            cout << "************ Nível Fácil ************" << endl;
            cout << "Sua pontuação inicial é de: " << pontos << " pontos." << endl;
            break;
        }
        else if(nivel == 'M'){
            pontos = 600.0;
            tentativas = 8;
            cout << "************ Nível Médio ************" << endl;
            cout << "Sua pontuação inicial é de: " << pontos << " pontos." << endl;
            break;
        }
        else if(nivel == 'D'){
            pontos = 300.0;
            tentativas = 5;
            cout << "************ Nível Difícil ************" << endl;
            cout << "Sua pontuação inicial é de: " << pontos << " pontos." << endl;
            break;
        }
        else{
            cout << "!!! Por favor, digite apenas as letras correspondentes aos níveis !!!" << endl << endl;
            continue;
        }
    }
    cout << "Tente adivinhar o número secreto que está entre 0 e 100" << endl << endl;

    for (tentativas; tentativas > 0; tentativas--){
        cout << "Você tem " << tentativas << " tentativas." << endl;

        cout << "Qual seu chute? ";
        cin >> chute;
        cout << endl << endl << endl;
        cout << "Seu chute foi: " << chute << endl;

        bool acertou = chute == NUMERO_SECRETO;
        bool maior = chute > NUMERO_SECRETO;

        if(acertou){
            cout << " _________________________" << endl << endl;
            cout << "| Parabéns, você acertou! |" << endl;
            cout << " _________________________" << endl <<endl;
            break;
        }
        else if(maior){
            cout << "O chute foi MAIOR que o número secreto." << endl << endl;
        }
        else{
            cout << "O chute foi MENOR que o número secreto." << endl << endl;
        }
        pontos_perdidos = abs((chute - NUMERO_SECRETO)*1.5)/2.0;
        pontos = pontos - pontos_perdidos;
    }
    if(tentativas == 0){
        cout << "Que pena, você perdeu! Tente novamente" << endl;
    }
    else{
        cout.precision(2);
        cout << fixed;
        cout << "Sua pontuação final foi: " << pontos << " pontos." << endl;
    }
    cout << "Fim de Jogo!" << endl;
    return 0;
}