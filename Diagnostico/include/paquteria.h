#ifndef PAQUTERIA_H
#define PAQUTERIA_H

#include "paquete.h"

class paqueteria
{
    public:
        paquete *h;

        paqueteria(paquete*);
        paqueteria();

        void insertar(int,string,string,float);
        void eliminar();
        void mostrar();
        //void guardar();
        //void recuperar();


};

#endif // PAQUTERIA_H
