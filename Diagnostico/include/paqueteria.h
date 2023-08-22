#ifndef PAQUETERIA_H
#define PAQUETERIA_H
#include "paquete.h"

class paqueteria
{
    public:
        paquete *h;

        paqueteria();
        paqueteria(paquete*);

        void insertar(int,string,string,float);
        void eliminar();
        void mostrar();
        void guardar();
        void recuperar();

    protected:

    private:
};

#endif // PAQUETERIA_H
