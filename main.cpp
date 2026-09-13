#incluide <iostream>
#incluide <string> 

using namespace std;
void mostrarMenu (){
    cout << "============ SISTEMA DE GESTION DE MUSICA ============";<<endl;
    cout << "1. Registrar una canción" <<endl;
    cout << "2. Mostrar los registros de canciones"<<endl; 
    cout << "3. Buscar una canción "<<endl; 
    cout << "4. Mostrar reporte general"<<endl; 
    cout << "5. Playlist para barrer la casa como alma depresiva"<<endl; 
    cout << "6. Salir" <<endl;
    cout << "seleccione una opción: "<<endl;

    int main (){
        string nombres [20];
        float duraciones [20]; 
        int cantidadCanciones = 0;
        int opcion = 0; 
        do {
            mostrarMenu ();
            cin >> opcion; 

            switch (opcion){
            case 1:
                cout<<"\nRegistrar cancion\n";
                break;
            case 2: 
                cout<<"\nMostrar los registros de canciones\n";
                break;
            case 3:
                cout<<"\nBuscar una cancion\n";
                break;
            case 4:
                cout<<"\nReporte general\n";
                break;
            case 5: 
                cout<<"\nPlaylist para barrer la casa como alma depresiva\n";
                break;
            case 6:
                cout<< "\nSaliendo del Programa: Chao :D\n";
                break;
            default:
                cout<< "\nOpcion invalida. Por favor intente de nuevo\n";
                break;
            }
        }while (opcion !=6)
        
        return 0;
    }
}
