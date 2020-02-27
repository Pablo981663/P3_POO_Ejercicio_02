#include <iostream>
#include "punto.h"
#include "rectangulo.h"

int main(){
Rectangulo miRectangulo;
miRectangulo.AsignarSupIzq(1,5);
miRectangulo.AsignarSupDer(7,5);
miRectangulo.AsignarInfIzq(1,1);
miRectangulo.AsignarInfDer(7,1);

cout << "El perimetro del rectangulo es: " << miRectangulo.Perimetro() << endl;
cout << "El area del rectangulo es: " << miRectangulo.Area() << endl;
cout<< "Es un rectangulo realmente: "<< miRectangulo.Distancias()<<endl;
}
