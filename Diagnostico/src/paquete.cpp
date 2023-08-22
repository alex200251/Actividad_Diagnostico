#include "paquete.h"

paquete::paquete()
{
    id=0;
    origen="";
    destino="";
    peso=0;
    sig=nullptr;
}
paquete::paquete(int id,string origen,string destino,float peso, paquete *sig)
{
    this->id=id;
    this->origen=origen;
    this->destino=destino;
    this->peso=peso;
    this->sig=sig;

}
