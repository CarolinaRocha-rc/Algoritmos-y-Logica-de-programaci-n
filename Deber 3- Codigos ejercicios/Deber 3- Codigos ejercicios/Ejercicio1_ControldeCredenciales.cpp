#include <iostream>
#include <string>
using namespace std;

int main() {
    int minutos_tarde, faltas_acumuladas;
    int credencial, pertenece_curso;
    string estado, motivo, prioridad;

    cout << "Ingrese minutos de retraso (0 si fue puntual): ";
    cin >> minutos_tarde;
    cout << "Ingrese numero de faltas acumuladas: ";
    cin >> faltas_acumuladas;
    cout << "¿Trae credencial? (1=Si, 0=No): ";
    cin >> credencial;
    cout << "¿Pertenece al curso del horario actual? (1=Si, 0=No): ";
    cin >> pertenece_curso;

    if (credencial == 0) {
        estado = "No ingresa";
        motivo = "No trae credencial";
        prioridad = "Alta";
    } else {
        if (pertenece_curso == 0) {
            estado = "No ingresa";
            motivo = "No pertenece al curso actual";
            prioridad = "Alta";
        } else {
            if (faltas_acumuladas >= 5) {
                estado = "No ingresa";
                motivo = "Tiene 5 o más faltas acumuladas";
                prioridad = "Alta";
            } else {
                if (minutos_tarde > 10) {
                    estado = "No ingresa";
                    motivo = "Llegó con más de 10 minutos de retraso";
                    prioridad = "Media";
                } else {
                    if (faltas_acumuladas >= 3) {
                        estado = "Ingresa con advertencia";
                        motivo = "Tiene 3 o más faltas acumuladas";
                        prioridad = "Media";
                    } else {
                        if (minutos_tarde > 0 && minutos_tarde <= 10) {
                            estado = "Ingresa con advertencia";
                            motivo = "Llegó entre 0 y 10 minutos tarde";
                            prioridad = "Baja";
                        } else {
                            estado = "Ingresa sin problema";
                            motivo = "Cumple todos los requisitos";
                            prioridad = "Baja";
                        }
                    }
                }
            }
        }
    }

    cout << "Estado: " << estado << endl;
    cout << "Motivo: " << motivo << endl;
    cout << "Prioridad: " << prioridad << endl;

    return 0;


}

