#include <iostream>
#include <fstream>
#include "paqueteria.h"

using namespace std;


int id;
float peso;
string origen,destino;


int main()
{
    ofstream myFile;
    myFile.open("D:/SemAlgoritmia/ola.txt",ios::app);
    paqueteria *lis=new paqueteria();
    int opc;
    do
    {
         cout<<"        MENU         "<<endl;
         cout<<"1.Insertar paquete\n2.Eliminar paquete del inicio\n3.Mostrar paquetes\n4.Respaldar en archivo .txt\n5.Recuperar archivo\n6.Salir"<<endl;
         cin>>opc;
         system("cls");
         switch(opc)
         {
             case 1:cout<<"Digite el ID del paquete"<<endl;
             cin>>id;
             cout<<"Digite el origen del paquete"<<endl;
             cin>>origen;
             cout<<"Digite el destino del paquete"<<endl;
             cin>>destino;
             cout<<"Digite el peso del paquete"<<endl;
             cin>>peso;
             lis->insertar(id,origen,destino,peso);
             cout<<"Paquete agregado!"<<endl;
             break;

             case 2: lis->eliminar();
             cout<<"Paquete eliminado!"<<endl;
             break;

             case 3:
                lis->mostrar();
            break;
            case 4:
                lis->guardar();
                cout<<"Datos guardados correctamente!"<<endl;
            break;
            case 5:
                lis->recuperar();
                cout<<"Datos recuperados e ingresados en la lista!"<<endl;
            break;
         }
         system("pause");system("cls");
    }while(opc!=6);
}
