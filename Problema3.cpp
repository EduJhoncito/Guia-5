//3. Una tienda ha puesto en oferta la venta un producto ofreciendo un descuento denominado 
//10%+10%  que  consiste  en  aplicar  dos  descuentos  del  10%.  El  importe  compra  se  calcula 
//multiplicando el precio del producto por la cantidad de unidades adquiridas. El primer descuento 
//es igual al 10% del importe compra. El segundo descuento es igual al 10% del la resta del importe 
//compra menos el primer descuento. El importe del descuento total se calcula sumando el primer 
//y  el  segundo  descuento.  El  importe  a  pagar  se  calcula  restando  el  importe  compra  menos  el 
//importe del descuento total. Dados el precio del producto y la cantidad de unidades adquiridas, 
//diseñe un algoritmo que determine el importe de la compra, el importe del descuento total y el 
//importe a pagar.  

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