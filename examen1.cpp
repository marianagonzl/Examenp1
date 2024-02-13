#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

class Circulo
{
private:
    float radio;

public:
    int x;
    int y;

    Circulo();
    Circulo(int x2,int y2);
    Circulo(int x2, int y2,float r);

    float getRadio();
    void setRadio(float r);
    float getArea();
    void intersects(Circulo circulo);

};

int main()
{

    Circulo c1;
    c1.setRadio(3.4);
    c1.x = 2;
    c1.y= 4;

    Circulo c2(5,4,6.2);
    Circulo c3(5,3,2);

    vector<Circulo> circulos {c1,c2,c3};

    for (int i=0; i<circulos.size(); i++)
    {
        circulos[i].getArea();
    }
        c1.intersects(c2);
        c1.intersects(c3);
        c2.intersects(c3);

    return 0;
}

Circulo::Circulo()
{
    radio = 0.0;
    x = 0;
    y = 0;
}

    Circulo::Circulo(int x2,int y2)
    {
        radio = 0.0;
        x = x2;
        y = y2;
    }

    Circulo::Circulo(int x2, int y2,float r)
    {
        radio = r;
        x = x2;
        y = y2;
    }

    float Circulo::getRadio()
    {
        return radio;
    }

    void Circulo::setRadio(float r)
    {
        radio=r;
        /*if(radio= -)
        {
            radio=0;
        }*/
    }

    float Circulo::getArea()
    {
        float area;
        area=3.14*radio*radio;
        cout << "El area es de " << area << endl;
    return area;
    }

    void Circulo::intersects(Circulo circulo)
    {
        float dist;
        float suma;
        dist = (circulo.x-x)+(circulo.y-y);
        dist = sqrt(dist);
        suma = circulo.radio+ circulo.radio;
        if (dist<suma)
        {
            cout << "Los circulos intersectan" << endl;
        }
        else
        {
            cout << "Los circulos no intersectan" << endl;
        }
    }

