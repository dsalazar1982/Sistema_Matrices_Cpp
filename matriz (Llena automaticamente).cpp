#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {

	     int f=3, c=3, i, j;
	     int matriz[f][c];
	
	     //Llenar matriz 1
	    for(i=0; i < f; i++){
			srand(time(0));
	        for(j=0; j<c; j++){
	          matriz[f][c]=(rand()%9)+1;
	          cout << matriz[f][c] << "\t";
	        }
	        cout << endl;
	    }

		// Se pausa el sistema para ver los resultados
		system("pause");
		
		// Se retorna cero (0) para cerrar correctamente el programa
		return 0;
}
