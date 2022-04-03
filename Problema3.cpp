
#include <iostream>
using namespace std;

float ImporteTotal(float precio_unitario, int cantidad_unidades){
    return precio_unitario * cantidad_unidades;
}

float ImporteDescuentoInicial(float precio_inicial){
    return precio_inicial* 10/100;
}

float ImporteDescuentoFinal(float precio_inicial, float descuento_inicial){
    return ((precio_inicial)-descuento_inicial) * 10/100;
}

float ImporteDescuentoTotal(float descuento_inicial, float descuento_final){
    return descuento_inicial + descuento_final;
}

float ImporteTotal(float precio_inicial, float descuento_inicial, float descuento_final){
    return ((precio_inicial)-descuento_inicial)-descuento_final;
}

void MostrarResultado(float precio_final, float descuento_total, float precio_inicial){
    cout<<"El importe de la compra inicial es: "<<precio_inicial<<endl;
    cout<<"El descuento total es: "<<descuento_total<<endl;
    cout<<"El importe a pagar es: "<<precio_final<<endl;
}

int main()
{
    float precio_unitario, descuento_inicial, descuento_final, precio_final, descuento_total, precio_inicial;
    int cantidad_unidades; 

    cout<<"Ingrese el precio de producto: ";
    cin>>precio_unitario;

    cout<<"Ingrese la cantidad unidades del producto que comprara: ";
    cin>>cantidad_unidades;

    precio_inicial = ImporteTotal( precio_unitario, cantidad_unidades);
    descuento_inicial = ImporteDescuentoInicial( precio_inicial);
    descuento_final = ImporteDescuentoFinal(precio_inicial, descuento_inicial);
    descuento_total = ImporteDescuentoTotal(descuento_inicial, descuento_final);
    precio_final =  ImporteTotal(precio_inicial, descuento_inicial, descuento_final);

    MostrarResultado(precio_final, descuento_total, precio_inicial);

    return 0;
}
