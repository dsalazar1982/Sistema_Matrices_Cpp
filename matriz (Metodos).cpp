// Encabezado
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

	using namespace std;

	// Constantes para dimensionar la matriz
	const int filas = 3;
	const int columnas = 3;


	// Crea clase Matriz
	class Matriz {
		
		// Metodos publicos
		public: 
		
			// Metodo constructor
			Matriz(){
				for (int i = 0; i < filas; i++) {
					for (int j = 0; j < columnas; j++){
						_Matriz[i][j] = 0;
					}
				}
			}
			
			// Metodo llenar
			void Llenar(){
				srand(time(0));
				for(int i = 0; i < filas; i++){
					for(int j = 0; j < columnas; j++){
						_Matriz[i][j] = rand() % 9;
					}
				}
			}
			
			// Metodo mostrar
			void Mostrar(){
				for (int i = 0; i < filas; i++) {
					for (int j = 0; j < columnas; j++){
						cout << setw (3) << _Matriz[i][j] << "\t";
					}
					cout << endl;
				}
			}
			
			// Metodo sumar
			void Sumar(){
				// PROGRAMAR PROXIMAMENTE
			}
			
			// Metodo multiplicar
			void Multiplicar(){
				// PROGRAMAR PROXIMAMENTE			
			}
	
	
		// Metodos privados
		private:
		
			int _Matriz[filas][columnas];
	};

	
	// Metodo principal (main)
	int main(){
		
		// Variables del menu
		int opc1 = 0, opc2 = 0;
		
		// Define un objeto m1 de la clase Matriz
		Matriz m1;
		
		// Se genera el menu
		do{
			cout << "\n\n                           .: TALLER MATRICES :.                           ";
			cout << "\n                     .: DANIEL ALBERTO SALAZAR ERAZO :.                           \n\n";
			cout << "1 Llenar matriz\n";
			cout << "2 Listar matriz\n";
			cout << "3 Sumar matrices\n";
			cout << "4 Multiplicar matrices\n";
			cout << "5 Terminar\n\n";
			cout << "Ingrese el numero de la opcion: ";
			cin >> opc1;
			cout << "\n";
	
				switch(opc1){
	
					case 1:
						// Llama al metodo Llenar() desde el objeto m1
						cout << "MATRIZ FUE LLENADA\n";
						m1.Llenar();
						
						break;
	
					case 2:
						// Llama al metodo Mostrar() desde el objeto m1
						cout << "MATRIZ\n";
						m1.Mostrar();

						break;
	
					case 3:
						// Llama al metodo Sumar() desde el objeto m1
						cout << "SUMA DE MATRICES\n";
						// PROGRAMAR PROXIMAMENTE
						cout << "PROXIMAMENTE\n";
						
						break;
	
					case 4:
						// Llama al metodo Multiplicar() desde el objeto m1
						cout << "MULTIPLICACION DE MATRICES\n";
						// PROGRAMAR PROXIMAMENTE
						cout << "PROXIMAMENTE\n";
	
						break;
	
					case 5:
						// Terminar
						cout << "Seguro que desea salir ...?\n";
						cout << "\n1 SI";
						cout << "\n2 NO";
						cout << "\n\nIngrese el numero de la opcion: ";
						cin >> opc2;
							if(opc2==1){
								return 0;
							}
							else {
								return main();
							}

						break;
	
					default:
							return main();

						break;
				} 
			} while (opc1 != 5);
		
		// Se pausa el sistema para ver los resultados
		system("pause");
		
		// Se retorna cero (0) para cerrar correctamente el programa
		return 0;
	}
