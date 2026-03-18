#include <iostream>
using namespace std;

int main()
{
    float lectura_anterior, lectura_actual;
    int tipo_vivienda, numero_habitantes;
    int alto_consumo, tiene_deuda;

    float consumo, costo_base, total_final;
    float subsidio = 0, recargo = 0;
    float consumo_persona;

    cout << "Ingrese lectura anterior: ";
    cin >> lectura_anterior;

    cout << "Ingrese lectura actual: ";
    cin >> lectura_actual;

    if(lectura_actual < lectura_anterior)
    {
        cout << "Error: lectura invalida" << endl;
    }
    else
    {
        consumo = lectura_actual - lectura_anterior;

        cout << "Tipo de vivienda (1=Normal, 2=Social): ";
        cin >> tipo_vivienda;

        cout << "Numero de habitantes: ";
        cin >> numero_habitantes;

        cout << "Alto consumo? (1=Si,0=No): ";
        cin >> alto_consumo;

        cout << "Tiene deuda? (1=Si,0=No): ";
        cin >> tiene_deuda;

        if(consumo <= 100)
            costo_base = consumo * 0.10;
        else if(consumo <= 300)
            costo_base = consumo * 0.15;
        else
            costo_base = consumo * 0.20;

        if(tipo_vivienda == 2 && consumo < 150)
            subsidio = costo_base * 0.15;

        if(tiene_deuda == 1)
            recargo = costo_base * 0.10;

        total_final = costo_base - subsidio + recargo;

        consumo_persona = consumo / numero_habitantes;

        cout << "\n=====================" << endl;
        cout << "Consumo: " << consumo << endl;
        cout << "Costo base: " << costo_base << endl;
        cout << "Subsidio: " << subsidio << endl;
        cout << "Recargo: " << recargo << endl;
        cout << "Total final: " << total_final << endl;

        if(consumo_persona > 100)
            cout << "Alerta: Consumo excesivo" << endl;

        if(alto_consumo == 1 && consumo > 300)
            cout << "Riesgo: Sobrefacturacion" << endl;
    }

    return 0;
}
