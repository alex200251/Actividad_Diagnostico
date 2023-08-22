#ifndef PAQUETE_H
#define PAQUETE_H

#include <iostream>

using namespace std;

class paquete
{
    public:
        int id;
        string origen;
        string destino;
        float peso;

        paquete *sig;

        paquete();
        paquete(int,string,string,float,paquete*);


};

#endif // PAQUETE_H
