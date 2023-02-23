#include <iostream>
#include <string>
 
using namespace std;

int main() {
    string letra = "#";
    string espaco = " ";
    int num;
    int vezes = 0;

    cout << "Insira um número: ";
    cin >> num;
    int num_ = num;

    for (int i = 0; i < num; i++) { 
        vezes++;
        num_--;
        for(int i = 0; i < num_; i++) {
            cout << espaco;
        }
        for(int i = 0; i < vezes; i++) {
            cout << letra;
        }
        cout << endl;
    }
    return 0;
}