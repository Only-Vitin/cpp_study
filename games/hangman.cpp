#include <iostream>
#include <map>
#include <string>

using namespace std;

bool letra_existe(char chute, const string PALAVRA_SECRETA);

int main() {
    const string PALAVRA_SECRETA = "MELANCIA";
    map<char, bool> chutou;
    
    bool nao_acertou = true;
    bool nao_enforcou = true;

    cout << " ___________________" << endl << endl;
    cout << "|   Jogo da Forca   |" << endl;
    cout << " ___________________" << endl << endl;

    while(nao_acertou && nao_enforcou) {
        for(char letra : PALAVRA_SECRETA){
            if(chutou[letra]){

                cout << letra << " ";
            }
            else{
                cout << "_ ";
            }
        }
        cout << endl << endl;

        char chute;
        cout << "Qual o seu chute? ";
        cin >> chute;
        cout << endl;

        chutou[chute] = true;
        
        if(letra_existe(chute, PALAVRA_SECRETA)) {
            cout << "Seu chute ESTÁ na palavra" << endl;
        } else {
            cout << "Seu chute NÃO ESTÁ na palavra" << endl;
        }
    }
    return 0;
}

bool letra_existe(char chute, const string PALAVRA_SECRETA){
    for (char letra : PALAVRA_SECRETA){
        if(chute == letra){
            return true;
        }
    }
    return false; 
}