#ifndef RECTANGULO_H
#define RECTANGULO_H
#include <iostream>
#include <cmath>
#include "punto.h"
using namespace std;
class Rectangulo{
private:
Punto superiorIzquierdo;
Punto superiorDerecho;
Punto inferiorIzquierdo;
Punto inferiorDerecho;
public:
Rectangulo(){
cout<<"Se ha creado un rectangulo"<<endl;
}
void AsignarSupIzq(float x, float y){
superiorIzquierdo.asignarX( x);
superiorIzquierdo.asignarY( y);
}
void AsignarSupDer(float x, float y){
superiorDerecho.asignarX( x);
superiorDerecho.asignarY( y);
}
void AsignarInfIzq(float x, float y){
inferiorIzquierdo.asignarX( x);
inferiorIzquierdo.asignarY( y);
}
void AsignarInfDer(float x, float y){
inferiorDerecho.asignarX( x);
inferiorDerecho.asignarY( y);
}
float Distancias(){
    float Dist_b1 = abs(inferiorDerecho.obtenerX()-inferiorIzquierdo.obtenerX());
    float Dist_b2 = abs(superiorDerecho.obtenerX()-superiorIzquierdo.obtenerX());
    float Dist_a1 = abs(superiorDerecho.obtenerY()-inferiorDerecho.obtenerY());
    float Dist_a2 = abs(superiorIzquierdo.obtenerY()-inferiorIzquierdo.obtenerY());

    int Rect;
    if (Dist_b1==Dist_b2&&Dist_a1==Dist_a2){

            Rect=Dist_b1*Dist_a1;

     if (Rect=1){
            cout << "Si es un rectagulo" << endl;
        }
    if (Rect=0){
            cout << "No es rectangulo" << endl;
        }
    }
}
float Perimetro(){
float base = abs(inferiorDerecho.obtenerX() - inferiorIzquierdo.obtenerX());
float altura = abs(inferiorDerecho.obtenerY() - superiorIzquierdo.obtenerY());
return (base*2) + (altura*2);
}
float Area(){
float base = abs(inferiorDerecho.obtenerX() - inferiorIzquierdo.obtenerX());
float altura = abs(inferiorDerecho.obtenerY() - superiorIzquierdo.obtenerY());
return (base*altura);
}

};
#endif
