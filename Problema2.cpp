
#include <iostream>
using namespace std;

float ImporteTotal(float precio_normal, int cantidad_pasajes){
    return precio_normal * cantidad_pasajes;
}

float ImporteDescuento(float importe_total){
    return importe_total * 7/100;
}

float ImporteTotal(float importe_total, float importe_descuento){
    return importe_total - importe_descuento;
}

int cantidadChocolates(int cantidad_pasajes){
    return cantidad_pasajes*3;
}

void MostrarResultado(float importe_total, float importe_descuento, float importe_a_pagar, int cantidad_chocolates){
    cout<<"El importe de compra es: "<<importe_total<<endl;
    cout<<"El importe del descuento es: "<<importe_descuento<<endl;
    cout<<"El importe a pagar es: "<<importe_a_pagar<<endl;
    cout<<"La cantidad de chocolates obsequiados es: "<<cantidad_chocolates<<endl;
}

int main(){
    float precio_normal, importe_total, importe_descuento, importe_a_pagar;
    int cantidad_chocolates, cantidad_pasajes; 

    cout<<"Ingrese el precio normal del pasaje: ";
    cin>>precio_normal;

    cout<<"Ingrese la cantidad de pasajes que comprara: ";
    cin>>cantidad_pasajes;

    importe_total = ImporteTotal(precio_normal, cantidad_pasajes);
    importe_descuento = ImporteDescuento(importe_total);
    importe_a_pagar = ImporteTotal(importe_total,importe_descuento);
    cantidad_chocolates = cantidadChocolates(cantidad_pasajes);

    MostrarResultado(importe_total, importe_descuento, importe_a_pagar, cantidad_chocolates);

    return 0;

}
