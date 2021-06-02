#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int num[4],i,j;
    int matriz[4][4];

    for (i=0; i<4; i++) {
        cout << "Ingrese elemento " << i << ": ";
        cin >> num[i];
    }

    cout << endl;

    //lenar matriz

    for (i=0; i<4; i++) {
        for (j=0; j<4; j++) {
            matriz[i][j] = pow(num[i],j+1);
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

		// Se pausa el sistema para ver los resultados
		system("pause");
		
		// Se retorna cero (0) para cerrar correctamente el programa
		return 0;
}
