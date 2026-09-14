#include <iostream>
#include <string> 

using namespace std;
void mostrarMenu (){
    cout << "============ SISTEMA DE GESTION DE MUSICA (⁠◍⁠•⁠ᴗ⁠•⁠◍⁠)⁠============"<<endl;
    cout << "1. Registrar una canción" <<endl;
    cout << "2. Mostrar los registros de canciones"<<endl; 
    cout << "3. Buscar una canción "<<endl; 
    cout << "4. Mostrar reporte general"<<endl; 
    cout << "5. Playlist para barrer la casa como señora depechada "<<endl; 
    cout << "6. Salir" <<endl;
    cout << "seleccione una opción: ";
} 

int main (){
    string nombres [20];
    string autores [20];
    int visitas [20];  
    int cantidadCanciones = 0;
    int opcion = 0; 
    do {
        mostrarMenu ();
        cin >> opcion; 

        switch (opcion){
            case 1:
                cout << "\nRegistrar cancion\n";
                if (cantidadCanciones == 20) {
                    cout << "El catalogo esta lleno. Max 20 canciones." << endl;
                } else {
                    cout << "Colocar el nombre de la cancion: ";
                    cin >> nombres[cantidadCanciones];
                    cout << "Colocar el autor de la cancion: ";
                    cin >> autores[cantidadCanciones];
                    cout << "Colocar las visitas en Youtube de la cancion: ";
                    cin >> visitas[cantidadCanciones];
                    cantidadCanciones++;
                }
                break;
            case 2: 
                cout<<"\nRegistros de canciones\n"; 
                if (cantidadCanciones ==0){
                    cout<<"No hay canciones registradas :(\n"; 
                }else{
                    for (int i = 0; i < cantidadCanciones; i++){
                        cout<<(i+1)<<" ⁠♡ "<<nombres[i];
                        cout<<"-"<<autores[i];
                        cout<<"("<<visitas[i]<<"visitas en Youtube\n)"; 
                    }
                }
                break;
            case 3:
                cout<<"\nBuscar una cancion\n";
                if (cantidadCanciones==0){
                    cout<< "No hay canciones registradas :(\n";
                }else{
                    string buscar;
                    cout<<"Ingresar la canción que desea buscar: "; 
                    cin>> buscar; 
                    bool encontrada = false;
                    for (int i = 0; i < cantidadCanciones; i++){
                        if (nombres[i]==buscar){
                            cout<< " Encontramos tu canción :D!\n";
                            cout<< "Nombre: "<<nombres[i]<<endl; 
                            cout<< "Autor: "<<autores[i]<<endl;
                            cout<< "Visitas en Youtube: "<<visitas[i]<<endl; 
                            encontrada=true;
                        }   
                    }
                }
                break;
            case 4:
                cout<<"\nReporte general\n";
                if (cantidadCanciones==0) {
                    cout <<"No hay canciones registradas :(\n";
                }else{
                    int totalVisitas=0;
                    int masVistas=0;
                    for (int i = 0; i < cantidadCanciones; i++){
                        totalVisitas += visitas[i]; 
                        if (visitas[i]>visitas[masVistas]){
                            masVistas=i;
                        }  
                    }
                    float promedioVisitas = (float)totalVisitas / cantidadCanciones;
                    cout<<"Total de canciones registradas"<<cantidadCanciones<<endl;
                    cout << "Total de visitas acumuladas: " << totalVisitas << " reproducciones" << endl;
                    cout << "Promedio de visitas por cancion: " << promedioVisitas << " reproducciones" << endl;
                    cout << "Cancion mas popular: " << nombres[masVistas]<< " de " << autores[masVistas]<< " con " << visitas[masVistas] << " visitas." << endl;
                } 
                break;
            case 5: 
            cout << "\nPlaylist para barrer la casa como alma depresiva\n";
            if (cantidadCanciones == 0) {
                cout << "No hay canciones registradas :(\n";
            } else {
                int limiteVisitas = 1000000;
                bool hayExitos = false;

                cout << "Buscando los hits mas populares para ti ;)...\n";

                for (int i = 0; i < cantidadCanciones; i++) {
                    if (visitas[i] >= limiteVisitas) {
                        cout << " ♡ " << nombres[i] << " - " << autores[i] 
                             << " (" << visitas[i] << " visitas)\n";
                        hayExitos = true;
                    }
                }

                if (!hayExitos) {
                    cout << "\nNo tienes canciones con mas de 1 millon de visitas en Youtube. !Registralo :D!\n";
                }
            }
            break;
            case 6:
                cout<< "\nSaliendo del Programa: Chao :D\n";
                break;
            default:
                cout<< "\nOpcion invalida. Por favor intente de nuevo ._.\n";
                break;
            }
    }while (opcion !=6);

    return 0;
}