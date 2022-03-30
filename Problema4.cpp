//4.  Una  empresa  paga  a  sus  empleados  por  horas  trabajadas.  El  sueldo  bruto  se  calcula 
//multiplicando  las  horas  trabajadas  por  la  tarifa  horaria  del  empleado.  Por  ley,  todo  empleado 
//esta sujeto a un descuento del 15% del sueldo bruto. El sueldo neto se calcula restando el sueldo 
//bruto menos el importe del descueto. Dados el número de horas trabajadas y la tarifa horaria de 
//un empleado, diseñe un algoritmo que determine el sueldo bruto, el descuento y el sueldo neto 
//del empleado.  

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