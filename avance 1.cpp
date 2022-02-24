#include <iostream>
using namespace std;

int main()
{
	int salir, exit;
	int cita;
	char nombre[50];
	char tratamiento[50];
	char descripcion[200];
	float hora, pu, ct, put, total;
	int agoc;
	int cv;
	int opcion;
	int menu;
	do
	{
		cout << "CONSULTORIO DENTAL" << endl;
		cout << "1. Agendar cita" << endl;
		cout << "2. Modificar cita" << endl;
		cout << "3. Eliminar cita" << endl;
		cout << "4. Lista de citas vigentes" << endl;
		cout << "5. Limpiar pantalla" << endl;
		cout << "6. Salir" << endl;
		cin >> opcion;

		switch (opcion)
		{
		case 1:
			do {
				cout << "escriba su nombre completo:" << endl;
				cin >> nombre;
				cout << "Ingrese la hora del tratamiento (En formato 24hrs.)" << endl;
				cin >> hora;
				cout << "ingrese el tratamiento a realizar:" << endl;
				cin >> tratamiento;
				cout << "Ingrese la descripcion del tratamiento" << endl;
				cin >> descripcion;
				cout << "Ingrese el Precio unitario del tratamiento" << endl;
				cin >> put;
				cout << "Ingrese cantidad del tratamiento" << endl;
				cin >> ct;
				cout << "Ingrese el Precio unitario" << endl;
				cin >> pu;
				total = ct * put + pu;
				cout << "El total es " << total << endl;
				cout << " Quiere agendar otra cita?" << endl;
				cout << "1. Si " << endl;
				cout << "2. No" << endl;
				cin >> agoc;
			} while (agoc == 1);

			break;
		case 2:
			cout << "Modificar cita" << endl;
			break;
		case 3:
			cout << "Eliminar la cita" << endl;
			break;
		case 4:
			cout << "Lista de citas vigentes" << endl;
			cin >> cv;
			break;
		case 5:
			cout << "Limpiar la pantalla" << endl;
			break;
		case 6:
			cout << "Estas Seguro que Quieres salir?" << endl;
			cout << "1. Si" << endl;
			cout << "2. No" << endl;
			cin >> exit;
			if (exit == 1)
			{
				return 0;
			}
			else
			{
				return main();
			}
			break;

		default:
			cout << "La opcion elegida no es valida" << endl;
		}
		cout << "Ingrese 1 Para Volver al menu" << endl;
		cout << "Ingrese 2 Para Salir" << endl;
		cin >> salir;

	} while (salir == 1);



}


