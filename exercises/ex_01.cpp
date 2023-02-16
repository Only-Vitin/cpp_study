#include <iostream>
#include <cstdlib>

using namespace std;

void years(bool leap, bool huluculu, bool bulukulu);

int main(){
    int ano;
    cout << "*** Verificar se o ano é bissexto e suas festividade ***" << endl;

    while(true){
        cout << endl;
        cout << "Digite um ano maior que 2000: ";
        cin >> ano;  
        
        bool leap = false;
        bool huluculu = false;
        bool bulukulu = false;
        float resto4 = ano % 4;
        float resto100 = ano % 100;
        float resto400 = ano % 400;
        float resto15 = ano % 15;
        float resto55 = ano % 55;

        if(ano >= 2000){
            if((resto4 == 0 and resto100 != 0) or resto400 == 0){
                leap = true;
                if(resto55 == 0){
                    bulukulu = true;
                }
            }
            if(resto15 == 0){
                huluculu = true;
            }
            years(leap, huluculu, bulukulu); 
            continue;   
        } else{
            cout << "Por favor, ";
            continue;       
        }
    }
    return 0;
}

void years(bool leap, bool huluculu, bool bulukulu) {
    if(leap or huluculu or bulukulu){
        if(leap){
            cout << "This is a leap year" << endl;
        }
        if(huluculu){
            cout << "This year we have a huluculu festival" << endl;
        }
        if(bulukulu){
            cout << "This year we have a bulukulu festival" << endl;
        }
    }else{
        cout << "This is a ordinary year" << endl;
    }
}