#include <iostream>
using namespace std;

int main()
{
    float n1, n2, n3, asistencia, promedio;
    int proyecto, plagio;

    string estado;
    string obs_disciplina = "Sin faltas";
    string obs_rendimiento = "Normal";

    cout << "Ingrese nota 1: ";
    cin >> n1;
    cout << "Ingrese nota 2: ";
    cin >> n2;
    cout << "Ingrese nota 3: ";
    cin >> n3;

    cout << "Ingrese asistencia (%): ";
    cin >> asistencia;

    cout << "Entrego proyecto (1=Si, 0=No): ";
    cin >> proyecto;

    cout << "Cometio plagio (1=Si, 0=No): ";
    cin >> plagio;

    promedio = (n1 + n2 + n3) / 3;

    if(plagio == 1)
    {
        estado = "Reprobado";
        obs_disciplina = "Plagio";
    }
    else
    {

        if(asistencia < 70)
        {
            estado = "Reprobado";
        }
        else
        {
            if(promedio < 5)
            {
                estado = "Reprobado";
            }
            else if(promedio >= 5 && promedio < 7)
            {
                estado = "Recuperacion";
            }
            else if(promedio >= 7 && proyecto == 1)
            {
                estado = "Aprobado";
            }
            else if(proyecto == 0)
            {
                estado = "Recuperacion";
            }
        }
    }

    if((n1 == 10 || n2 == 10 || n3 == 10) &&
       ((n1 < 4 && n2 < 4) || (n1 < 4 && n3 < 4) || (n2 < 4 && n3 < 4)))
    {
        obs_rendimiento = "Rendimiento irregular";
    }

    if(n1 >= 9 && n2 >= 9 && n3 >= 9 && asistencia >= 95 && plagio == 0)
    {
        estado = "Aprobado con felicitacion";
    }

    cout << "========================";
    cout << "Promedio: " << promedio << endl;
    cout << "Estado academico: " << estado << endl;
    cout << "Observacion disciplinaria: " << obs_disciplina << endl;
    cout << "Observacion de rendimiento: " << obs_rendimiento << endl;

    return 0;
}
