#ifndef PUNTO_H
#define PUNTO_H


class Punto{
    public:
        Punto(float x_coord, float y_coord);
        Punto();

    void asignarX(float x_coord);
    void asignarY(float y_coord);
    float obtenerX()const;
    float obtenerY()const;
    void printData();

    private:
        float x;
        float y;
};

#endif // PUNTO_H
