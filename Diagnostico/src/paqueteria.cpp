#include <fstream>
#include <stdlib.h>
#include <sstream>
#include "paqueteria.h"
using namespace std;
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
void paqueteria::guardar()
{
    ofstream myFile;
    myFile.open("Respaldo.txt", ios::out);

    if (!myFile.is_open())
    {
        throw runtime_error("No se pudo abrir el archivo |Respaldo.txt");
    }
    paquete* aux = h;

    while (aux != nullptr)
    {
        myFile<<aux->id<<"|"<<aux->origen<<"|"<<aux->destino<<"|"<<aux->peso<<endl;
        aux = aux->sig;
    }
    myFile.close();
}

void paqueteria::recuperar()
{
    ifstream myFile("Respaldo.txt");
    if (!myFile.is_open())
    {
        throw runtime_error("No se pudo abrir el archivo: Respaldo.txt ");
    }
    string data;

    while (getline(myFile, data))
    {
        stringstream ss(data);
        string id_, origen_, destino_, peso_;
        getline(ss, id_, '|');
        getline(ss, origen_, '|');
        getline(ss, destino_, '|');
        getline(ss, peso_, '|');

        int id=stoi(id_);
        float peso=stof(peso_);

        insertar(id, origen_, destino_, peso);

    }
}
