// Cabecera
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <iomanip>
	
	using namespace std;
	
	// Metodo principal (main)
	main (){
	
	// Variables de menu principal
	int opc1=0;
	
	// Variables de matriz 1 (m1), martriz 2 (m2), matriz resultante (mR) y listar matrices
	int f=3, c=3, i=0, j=0;
	int m1[f][c];
	int m2[f][c];
	int mR[f][c];
	
	// Variables de multiplcar y sumar matrices
	int k=0, x=0, w=0;	
					
	// Variables de salir
	int opc2=0;

	// Se inicializan las matrices a cero (0)
	for(i=0; i < f; i++){
	    for(j=0; j < c; j++){
	        m1[i][j] = 0;
			m2[i][j] = 0;
			mR[i][j] = 0;
		}
	}
	
		do{
	
			cout << "\n\n                           .: TALLER MATRICES :.                           ";
			cout << "\n                      .: DANIEL ALBERTO SALAZAR ERAZO :.                           \n\n";
			cout << "1 Llenar matriz 1.\n";
			cout << "2 Llenar matriz 2.\n";
			cout << "3 Listar matrices.\n";
			cout << "4 Sumar matrices.\n";
			cout << "5 Multiplicar matrices.\n";
			cout << "6 Terminar.\n\n";
			cout << "Ingrese el numero de la opcion: ";
			cin >> opc1;
			cout << "\n";
	
				switch(opc1){
	
					case 1:
						// Llenar matriz 1
					    srand(time(0));
						for(i=0; i < f; i++){
					        for(j=0; j<c; j++){
					          m1[i][j]= rand() % 9;
					        }
					    }
					    cout << "MARIZ 1 LLENA\n";

						break;
	
					case 2:
						// Llenar matriz 2
						srand(time(0));
					    for(i=0; i < f; i++){
					        for(j=0; j<c; j++){
					          m2[i][j]= rand() % 9;
							}
					    }
						cout << "MARIZ 2 LLENA\n";

						break;
	
					case 3:
						// Listar matrices
						cout << "MATRIZ 1\n";
					    for(i=0; i < f; i++){
					        for(j=0; j<c; j++){
							  cout << m1[i][j] << "\t";
					        }
					        cout << endl;
					    }
	
						printf("\n");
					
						cout << "MATRIZ 2\n";
					    for(i=0; i < f; i++){
					        for(j=0; j<c; j++){
					          cout << m2[i][j] << "\t";
							}
							cout << endl;
					    }
							
						printf("\n");	
							
						cout << "MATRIZ RESULTANTE\n";
					    for(i=0; i < f; i++){
							srand(time(0));
					        for(j=0; j<c; j++){
							  	cout << mR[i][j] << "\t";
					        }
					        cout << endl;
					    }			

						break;
	
					case 4:
						// Sumar matrices
						cout << "SUMA DE MATRICES\n";
						for (int i = 0; i < f; i++){
							for (int j = 0; j< c; j++){
								mR[i][j] = m1[i][j] + m2[i][j];
								cout << mR[i][j] << "\t";
							}
							cout << endl;
						}

						break;
	
					case 5:
						// Multiplicar matrices
						cout << "MULTIPLICACION DE MATRICES\n";
						for(x=0; x < f; x++){
						    for(w=0; w < c; w++){
						        mR[x][w]=0;
						        for(k=0; k < c; k++){
						            mR[x][w] = (mR[x][w] + (m1[x][k] * m2[k][w]));
						        }
						        cout << mR[x][w] << "\t";
				          	}
						    cout << endl;
						}
	
						break;
	
					case 6:
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
			} while (opc1 != 6);
	
		// Se pausa el sistema para ver los resultados
		system("pause");
		
		// Se retorna cero (0) para cerrar correctamente el programa
		return 0;	}
