#include <iostream>
#include <cmath>

using namespace std;

int main(){

    float a,b,c,base,altura;
    float area,angulo;
    float mayor;

    string estado,tipo_lados,tipo_angulos,consistencia;

    cout<<"Ingrese lado A: ";
    cin>>a;

    cout<<"Ingrese lado B: ";
    cin>>b;

    cout<<"Ingrese lado C: ";
    cin>>c;

    cout<<"Ingrese la base: ";
    cin>>base;

    cout<<"Ingrese la altura: ";
    cin>>altura;

    if(a+b>c && a+c>b && b+c>a){

        estado="Triangulo valido";

        if(a==b && b==c)
            tipo_lados="Equilatero";
        else if(a==b || a==c || b==c)
            tipo_lados="Isosceles";
        else
            tipo_lados="Escaleno";

        mayor=a;

        if(b>mayor)
            mayor=b;

        if(c>mayor)
            mayor=c;

        if(mayor==a)
            angulo=acos((b*b+c*c-a*a)/(2*b*c))*180/3.1416;

        if(mayor==b)
            angulo=acos((a*a+c*c-b*b)/(2*a*c))*180/3.1416;

        if(mayor==c)
            angulo=acos((a*a+b*b-c*c)/(2*a*b))*180/3.1416;

        if(angulo<90)
            tipo_angulos="Acutangulo";
        else if(angulo==90)
            tipo_angulos="Rectangulo";
        else
            tipo_angulos="Obtusangulo";

        area=(base*altura)/2;

        if(altura>a || altura>b || altura>c)
            consistencia="Advertencia: altura inconsistente";
        else
            consistencia="Altura consistente";

    }
    else{

        estado="No forma triangulo";
        tipo_lados="No aplica";
        tipo_angulos="No aplica";
        area=0;
        consistencia="No aplica";

    }

    cout<<"Estado: "<<estado<<endl;
    cout<<"Tipo por lados: "<<tipo_lados<<endl;
    cout<<"Angulo principal: "<<angulo<<endl;
    cout<<"Tipo por angulos: "<<tipo_angulos<<endl;
    cout<<"Area: "<<area<<endl;
    cout<<"Consistencia: "<<consistencia<<endl;

    return 0;
}
