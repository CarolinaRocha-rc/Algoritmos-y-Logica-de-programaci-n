#include <iostream>
using namespace std;

int main() {

    int hojas;
    string tipoImpresion, tipoCliente, horario, anillado;
    float precioHoja, subtotal, descuento, recargo, valorAnillado, total;

    cout << "Ingrese numero de hojas: ";
    cin >> hojas;

    cout << "Tipo de impresion (bn/color): ";
    cin >> tipoImpresion;

    cout << "Tipo de cliente (estudiante/docente): ";
    cin >> tipoCliente;

    cout << "Horario (normal/nocturno): ";
    cin >> horario;

    cout << "Desea anillado (si/no): ";
    cin >> anillado;

    if(hojas <= 20)
        precioHoja = 0.05;
    else if(hojas <= 100)
        precioHoja = 0.04;
    else
        precioHoja = 0.03;

    if(tipoImpresion == "color")
        precioHoja += 0.05;

    subtotal = hojas * precioHoja;

    descuento = 0;

    if(tipoCliente == "docente")
        descuento = subtotal * 0.05;

    if(tipoCliente == "estudiante" && hojas > 50)
        if(subtotal * 0.08 > descuento)
            descuento = subtotal * 0.08;

    recargo = 0;

    if(horario == "nocturno")
        recargo = subtotal * 0.10;

    valorAnillado = 0;

    if(anillado == "si"){
        valorAnillado = 3;
        if(hojas > 100)
            valorAnillado *= 0.8;
    }

    total = subtotal - descuento + recargo + valorAnillado;

    cout << "\nSubtotal impresion: " << subtotal;
    cout << "\nDescuento aplicado: " << descuento;
    cout << "\nRecargo: " << recargo;
    cout << "\nValor anillado: " << valorAnillado;
    cout << "\nTotal a pagar: " << total;

    return 0;
}
