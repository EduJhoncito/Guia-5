
#include <iostream>
using namespace std;

float Comision(float importe_total_vendido){
    return importe_total_vendido * 5/100;
}

float SueldoBruto(float sueldo_basico, float comision){
    return sueldo_basico + comision;
}

float Descuento(float sueldo_bruto){
    return sueldo_bruto * 15/100;
}

float SueldoNeto(float sueldo_bruto,float descuento){
    return sueldo_bruto - descuento;
}

void MostrarResultado(float sueldo_basico, float comision, float sueldo_bruto, float descuento, float sueldo_neto){
    cout<<"El sueldo basico es: "<<sueldo_basico<<endl;
    cout<<"La comisión es: "<<comision<<endl;
    cout<<"El sueldo bruto es: "<<sueldo_bruto<<endl;
    cout<<"El descuento es: "<<descuento<<endl;
    cout<<"El sueldo neto es: "<<sueldo_neto<<endl;
}

int main(){
    float sueldo_bruto, sueldo_basico, comision, descuento, sueldo_neto, importe_total_vendido;

    cout<<"Ingrese el importe total vendido en el mes: ";
    cin>>importe_total_vendido;

    sueldo_basico=350.75;
    comision = Comision(importe_total_vendido);
    sueldo_bruto = SueldoBruto(sueldo_basico, comision);
    descuento = Descuento(sueldo_bruto);
    sueldo_neto = SueldoNeto(sueldo_bruto,descuento);

    MostrarResultado(sueldo_basico=350.75, comision, sueldo_bruto, descuento, sueldo_neto);

    return 0;

}
