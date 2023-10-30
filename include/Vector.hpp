#pragma once

class Vector
{
private:
    int x;
    int y;
    int direccion_x;
    int direccion_y;

public:
    Vector(/* args */) : Vector(0,0) {

    }

    Vector(int x, int y)
    {
        this->x = x;
        this->direccion_x = 1;
        this->y = y;
        this->direccion_y = 1;
    }

    void CambiarDireccionX()
    {
        this->direccion_x *= -1;
    }
    void CambiarDireccionY()
    {

        this->direccion_y *= -1;
    }

    void DesplazarX(unsigned int x)
    {
        this->x += x * this->direccion_x;
    }

    void DesplazarY(unsigned int y)
    {
        this->y += y * this->direccion_y;
    }
    int LeerX()
    {
        return this->x;
    }
    int LeerY()
    {
        return this->y;
    }
    ~Vector() {}
};