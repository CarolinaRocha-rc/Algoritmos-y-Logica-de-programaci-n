#include <iostream>
#include <string>

using namespace std;

int main() {

    float promedio;
    int materias_perdidas;
    int asistencia;
    int participa_proyectos;
    int ingresos_bajos;

    string tipo_ayuda;
    string razon_academica;
    string razon_economica;
    string observacion;

    cout << "Ingrese el promedio del estudiante: ";
    cin >> promedio;

    cout << "Ingrese numero de materias perdidas: ";
    cin >> materias_perdidas;

    cout << "Ingrese porcentaje de asistencia: ";
    cin >> asistencia;

    cout << "Participa en proyectos? (1 = Si, 0 = No): ";
    cin >> participa_proyectos;

    cout << "Los ingresos familiares son bajos? (1 = Si, 0 = No): ";
    cin >> ingresos_bajos;


    if (asistencia < 80) {

        tipo_ayuda = "Sin beneficio";
        razon_academica = "Asistencia menor al 80%";
        razon_economica = "No aplica";
        observacion = "No cumple requisito minimo de asistencia";

    }
    else if (promedio < 7) {

        tipo_ayuda = "Sin beneficio";
        razon_academica = "Promedio menor a 7";
        razon_economica = "No aplica";
        observacion = "Rendimiento academico insuficiente";

    }
    else if (promedio >= 9 && asistencia >= 90 && materias_perdidas == 0) {

        tipo_ayuda = "Beca completa";
        razon_academica = "Alto rendimiento academico";
        razon_economica = "No necesaria";
        observacion = "Cumple todos los requisitos";

    }
    else if (promedio >= 8 && promedio < 9 && asistencia >= 85) {

        tipo_ayuda = "Beca parcial";
        razon_academica = "Buen rendimiento academico";
        razon_economica = "Apoyo parcial";
        observacion = "Cumple condiciones para beca parcial";

    }
    else {

        tipo_ayuda = "Ayuda de materiales";
        razon_academica = "Rendimiento aceptable";
        razon_economica = "Apoyo basico";
        observacion = "Se otorga ayuda academica basica";

    }


    if (participa_proyectos == 1 && ingresos_bajos == 1) {

        razon_economica = "Ingresos bajos y participacion en proyectos";

        if (tipo_ayuda == "Ayuda de materiales") {
            tipo_ayuda = "Beca parcial";
        }
    }


    cout << endl;
    cout << "Tipo de ayuda: " << tipo_ayuda << endl;
    cout << "Razon academica: " << razon_academica << endl;
    cout << "Razon economica: " << razon_economica << endl;
    cout << "Observacion final: " << observacion << endl;

    return 0;
}
