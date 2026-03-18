#include <iostream>
using namespace std;

int main() {

    int monto, saldo;
    int b20, b10, b5, b1;
    int e20 = 0, e10 = 0, e5 = 0, e1 = 0;
    int restante;
    int efectivoCajero;

    cout << "Ingrese monto a retirar: ";
    cin >> monto;

    cout << "Ingrese saldo del usuario: ";
    cin >> saldo;

    cout << "Billetes de 20 disponibles: ";
    cin >> b20;

    cout << "Billetes de 10 disponibles: ";
    cin >> b10;

    cout << "Billetes de 5 disponibles: ";
    cin >> b5;

    cout << "Billetes de 1 disponibles: ";
    cin >> b1;

    if (monto <= 0) {

        cout << "Monto invalido";

    } else {

        efectivoCajero = b20 * 20 + b10 * 10 + b5 * 5 + b1;

        if (monto > saldo || monto > efectivoCajero) {

            cout << "Operacion no permitida";

        } else {

            restante = monto;

            while (restante >= 20 && e20 < b20) {
                restante = restante - 20;
                e20++;
            }

            while (restante >= 10 && e10 < b10) {
                restante = restante - 10;
                e10++;
            }

            while (restante >= 5 && e5 < b5) {
                restante = restante - 5;
                e5++;
            }

            while (restante >= 1 && e1 < b1) {
                restante = restante - 1;
                e1++;
            }

            if (restante != 0) {

                cout << "No se puede entregar el monto exacto";

            } else {

                saldo = saldo - monto;
                efectivoCajero = efectivoCajero - monto;

                cout << "Billetes de 20: " << e20 << endl;
                cout << "Billetes de 10: " << e10 << endl;
                cout << "Billetes de 5: " << e5 << endl;
                cout << "Billetes de 1: " << e1 << endl;

                cout << "Saldo restante: " << saldo << endl;
                cout << "Efectivo restante del cajero: " << efectivoCajero << endl;
            }
        }
    }

    return 0;
}
