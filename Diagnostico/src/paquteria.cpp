#include "paquteria.h"

paqueteria::paqueteria()
{
    h=nullptr;
}

paqueteria::paqueteria(paquete *ptr)
{
    h=ptr;
}

void paqueteria::insertar(int id,string origen,string destino,float peso)
{
    paquete *tmp=new paquete(id,origen,destino,peso, nullptr);

    if (!h)
    {
        h=tmp;
    }
    else
    {
        tmp->sig=h;
        h=tmp;
    }
}

void paqueteria::eliminar()
{
    paquete *aux=h;
    h=h->sig;
    delete aux;
}





void paqueteria::mostrar()
{
    paquete *aux=h;
    if(h)
    {
        while(aux)
        {
            cout<<"ID: "<<aux->id<<endl;
            cout<<"Origen: "<<aux->origen<<endl;
            cout<<"Destino: "<<aux->destino<<endl;
            cout<<"Peso: "<<aux->peso<<endl;
            aux=aux->sig;
        }
    }
    else
    {
        cout<<"Lista vacia"<<endl;
    }

}

