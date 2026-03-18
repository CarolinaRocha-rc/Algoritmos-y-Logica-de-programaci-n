#include <iostream>
using namespace std;

int main()
{
    int numero_estudiantes, tipo_transporte, numero_dias;
    int incluye_alimentacion, descuento_institucional, hay_coordinador;

    float costo_hospedaje_dia;
    float costo_transporte_persona, costo_transporte_total;
    float costo_hospedaje_total, costo_alimentacion;
    float total_general, total_por_estudiante;
    float descuento;

    int personas_transporte;

    cout << "Ingrese el numero de estudiantes: ";
    cin >> numero_estudiantes;

    cout << "Tipo de transporte (1=Bus, 2=Avion): ";
    cin >> tipo_transporte;

    cout << "Ingrese el numero de dias: ";
    cin >> numero_dias;

    cout << "Ingrese el costo de hospedaje por dia: ";
    cin >> costo_hospedaje_dia;

    cout << "Incluye alimentacion? (1=Si, 0=No): ";
    cin >> incluye_alimentacion;

    cout << "Aplica descuento institucional? (1=Si, 0=No): ";
    cin >> descuento_institucional;

    cout << "Hay coordinador? (1=Si, 0=No): ";
    cin >> hay_coordinador;

    if(tipo_transporte == 1)
        costo_transporte_persona = 50;
    else
        costo_transporte_persona = 80;

    if(numero_estudiantes > 30)
        costo_transporte_persona = costo_transporte_persona * 0.9;

    personas_transporte = numero_estudiantes;

    if(hay_coordinador == 1)
        personas_transporte = numero_estudiantes - 1;

    costo_transporte_total = personas_transporte * costo_transporte_persona;

    costo_hospedaje_total = numero_estudiantes * numero_dias * costo_hospedaje_dia;

    if(numero_dias > 3)
        costo_hospedaje_total = costo_hospedaje_total * 0.9;

    if(incluye_alimentacion == 1)
        costo_alimentacion = numero_estudiantes * numero_dias * 15;
    else
        costo_alimentacion = 0;

    total_general = costo_transporte_total + costo_hospedaje_total + costo_alimentacion;

    descuento = 0;

    if(descuento_institucional == 1 && total_general > 5000)
        descuento = total_general * 0.1;

    total_general = total_general - descuento;

    total_por_estudiante = total_general / numero_estudiantes;

    cout << "======================================" << endl;
    cout << "Costo transporte: " << costo_transporte_total << endl;
    cout << "Costo hospedaje: " << costo_hospedaje_total << endl;
    cout << "Costo alimentacion: " << costo_alimentacion << endl;
    cout << "======================================" << endl;
    cout << "Descuento: " << descuento << endl;
    cout << "Total general: " << total_general << endl;
    cout << "Total por estudiante: " << total_por_estudiante << endl;
    cout << "=======================================" << endl;

    if(total_por_estudiante > 500)
        cout << "Recomendacion: Viaje no recomendable" << endl;
    else
        cout << "Recomendacion: Viaje recomendable" << endl;

    return 0;
}
