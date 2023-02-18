#include <iostream>
#include <string>

using namespace std;

bool letra_existe(char chute, const string PALAVRA_SECRETA);

int main() {
    const string PALAVRA_SECRETA = "MELANCIA";
    cout << PALAVRA_SECRETA << endl;
    
    bool nao_acertou = true;
    bool nao_enforcou = true;

    while(nao_acertou && nao_enforcou) {
        char chute;
        cout << "Qual o seu chute? ";
        cin >> chute;
        
        if(letra_existe(chute, PALAVRA_SECRETA)) {
            cout << "Seu chute ESTÁ na palavra" << endl;
        } else {
            cout << "Seu chute NÃO ESTÁ na palavra" << endl;
        }
    }
    return 0;
}

bool letra_existe(char chute, const string PALAVRA_SECRETA){
    for (int i = 0; i < PALAVRA_SECRETA.size(); i++){
        if(chute == PALAVRA_SECRETA[i]){
            return true;
        }
    }
    return false;
}
