
#include <iostream>
using namespace std;

float importeCompra(float precio_unitario, int cantidad_unidades){
    return precio_unitario*cantidad_unidades;
}

float importeDescuento(float importe_compra){
    return importe_compra * 15/100;
}

float importeApagar(float importe_compra, float importe_descuento){
    return importe_compra - importe_descuento;
}

void MostrarResultados(float importe_compra, float importe_descuento, float importe_a_pagar){
    cout<<"El importe de compra es: "<<importe_compra<<endl;
    cout<<"El importe del descuento es: "<<importe_descuento<<endl;
    cout<<"El importe a pagar es: "<<importe_a_pagar<<endl;
}

int main(){
    int cantidad_unidades;
    float precio_unitario, importe_compra, importe_descuento, importe_a_pagar;

    cout<<"Ingrese el precio de producto: ";
    cin>>precio_unitario;

    cout<<"Ingrese la cantidad de productos: ";
    cin>>cantidad_unidades;

    importe_compra = importeCompra(precio_unitario, cantidad_unidades);
    importe_descuento = importeDescuento(importe_compra);
    importe_a_pagar = importeApagar(importe_compra, importe_descuento);

    MostrarResultados(importe_compra, importe_descuento, importe_a_pagar);
}
