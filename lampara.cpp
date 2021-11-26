#include <iostream>

using namespace std;

class Lampara
{
    private:
        /* data */
        bool estado;// true encendido, false apagado
        int intensidad;
        int temp ;
        float onda;
    public:
        Lampara(/* args */);
        ~Lampara();
        void encender();
        void apagar();
        void intensificar();
        void atenuar();
        bool obtenerEstado();
        int obtenerIntensidad();
        void difusa();
        void color();
        int temperatura();
        float Longitud_de_onda();

};

Lampara::Lampara(/* args */)
{
    estado = false;
    intensidad = 0;
    temp =4000;
    onda = 546,5460;
}

Lampara::~Lampara()
{
}

void Lampara::encender()
{
    estado = true;
}

void Lampara::apagar()
{
    estado = false;
}

void Lampara::intensificar()
{
    if(estado == true) intensidad++;
}

void Lampara::atenuar()
{
    if(estado == true and intensidad > 0) intensidad--;
}

bool Lampara::obtenerEstado()
{
    return estado;
}

int Lampara::obtenerIntensidad()
{
    return intensidad;
}

void Lampara::difusa(){
estado =true;
}

void Lampara::color(){

if(estado == true) intensidad++;



}

int Lampara :: temperatura(){
    return temp;

}


float Lampara :: Longitud_de_onda(){
 return onda;


}

int main()
{
    Lampara* osram = new Lampara;
    cout << "El estado inicial es: " << osram->obtenerEstado() << endl;
    cout << "La intensidad inicial es: " << osram->obtenerIntensidad() << endl;


    osram->encender();
    cout << "El estado es: " << osram->obtenerEstado() << endl;
    cout << "La intensidad es: " << osram->obtenerIntensidad() << endl;

    osram->intensificar();
    cout << "La intensidad es: " << osram->obtenerIntensidad() << endl;

    osram->intensificar();
    cout << "La intensidad es: " << osram->obtenerIntensidad() << endl;

    osram->atenuar();
    cout << "La intensidad es: " << osram->obtenerIntensidad() << endl;

    osram->apagar();
    cout << "El estado es: " << osram->obtenerEstado() << endl;

    osram->difusa();
    cout << "difusa: " << osram->obtenerEstado() << endl;

    osram->color();
    cout << "color : " << osram->obtenerIntensidad() <<endl;

    osram->temperatura();
    cout << "la temperatura de color de la lampara de vapor de mercurio es de: " << osram->temperatura() <<endl;

    osram-> Longitud_de_onda();
    cout << "Lampara color verde Longitud de onda (nm):	" << osram->Longitud_de_onda() <<endl;




    delete osram;
    return 0;
}
