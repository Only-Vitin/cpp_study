#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double a,b,c;
    double delta, x1, x2;

    cin >> a;
    cin >> b;
    cin >> c;

    delta = pow(b, 2.0)-4*a*c;

    if(a != 0){
        if(delta == 0) {
            x1 = (-b+sqrt(delta))/(2*a);
            cout << fixed;
            cout.precision(5);
            cout << "R1 = " << x1 << endl;
        }else if(delta > 0) {
            x1 = (-b+sqrt(delta))/(2*a);
            cout << fixed;
            cout.precision(5);
            cout << "R1 = " << x1 << endl;
            x2 = (-b-sqrt(delta))/(2*a);
            cout << fixed;
            cout.precision(5);
            cout << "R2 = " << x2 << endl;
        }else{
            cout << "Impossivel calcular" << endl;
        }
    }else{
        cout << "Impossivel calcular" << endl;
    }
    return 0;
}