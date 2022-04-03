
#include <iostream>
using namespace std;

float SueldoBruto(float tarifa_horaria, int horas_trabajadas){
    return tarifa_horaria * horas_trabajadas;
}

float Descuento(float sueldo_bruto){
    return sueldo_bruto * 15/100;
}

float SueldoNeto(float sueldo_bruto,float descuento){
    return sueldo_bruto - descuento;
}

void MostrarResultado(float sueldo_bruto, float descuento, float sueldo_neto){
    cout<<"El sueldo bruto es: "<<sueldo_bruto<<endl;
    cout<<"El descuento es: "<<descuento<<endl;
    cout<<"El sueldo neto es: "<<sueldo_neto<<endl;
}

int main(){
    float tarifa_horaria, sueldo_bruto, descuento, sueldo_neto;
    int horas_trabajadas; 

    cout<<"Ingrese la tarifa horaria del trabajador: ";
    cin>>tarifa_horaria;

    cout<<"Ingrese la cantidad de horas trabajadas: ";
    cin>>horas_trabajadas;

    sueldo_bruto = SueldoBruto(tarifa_horaria, horas_trabajadas);
    descuento = Descuento(sueldo_bruto);
    sueldo_neto = SueldoNeto(sueldo_bruto,descuento);

    MostrarResultado(sueldo_bruto, descuento, sueldo_neto);

    return 0;

}
