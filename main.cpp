
/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  Main
 *
 *        Created:  2019-09-11
 *
 *         Author:  Isaac Esquivel and José Rafael Jiménez
 *
 * =====================================================================================
 */

#include "Pabellon.h"
#include "Paciente.h"
#include "Doctor.h"
#include <vector>
#include <string.h>
#include <iostream>
#include <conio.h>

int main() {

	const int MAXIMODOCTORES = 20;
	const int MAXIMOPACIENTES = 200;
	const int MAXIMOPABELLONES = 10;
	int tamanoDoctor = 0;
	int tamanoPaciente = 0;
	int tamanoCamas = 0;
	int elim = 0;
	int seleccione = 0;
	int seleccione2 = 0;

	Cama cama1;
	std::vector<Cama> camas;

	Paciente paciente1;
	std::vector<Paciente> pacientes;

	Doctor doctor1;
	std::vector<Doctor> doctores;

	Pabellon pabellon1;
	std::vector<Pabellon> pabellones;

	int opcion = 0;
	std::string palabra;
	int numero;
	char cadena[100];

	using namespace std;

	std::string especialidades[] = { "Cardiologia", "Ginecologia", "Neurologia", "Neumologia", "Hematologia", "Endocrinologia", "Gastroenterologia", "Pediatria", "Infectologia", "Pciquiatria" };


	for (int recorrecama = 0; recorrecama < 20; recorrecama++)
	{
		for (int cambianumero = 0; cambianumero < MAXIMOPABELLONES; cambianumero++)
		{
			cama1.setCodigo(std::to_string(cambianumero + 1));
			camas.push_back(cama1);
		}
	}






	while (opcion != 9)
	{
		std::cout << std::endl << std::endl;
		std::cout << "----------------------------------- Registro del Hospital Esperanza -----------------------------------" << std::endl;
		std::cout << std::endl << std::endl;
		std::cout << "Menu Principal: " << std::endl;
		std::cout << std::endl << std::endl;
		std::cout << "1-Opciones de paciente: " << std::endl;
		std::cout << "2-Opciones de doctor: " << std::endl;
		std::cout << "Digite el numero de su opcion: " << std::endl;
		std::cin >> opcion;

		switch (opcion)
		{

		case 1:
			while (opcion != 7)
			{
				std::cout << std::endl << std::endl;
				std::cout << "----------------------------------- Pacientes -----------------------------------" << std::endl;
				std::cout << std::endl << std::endl;
				std::cout << "Menu de opciones: " << std::endl;
				std::cout << std::endl << std::endl;
				std::cout << "1-Agregar un paciente: " << std::endl;
				std::cout << "2-Eliminar un paciente: " << std::endl;
				std::cout << "3- Imprimir lista de pacientes" << std::endl;
				std::cout << "4- Asignar un doctor al paciente" << std::endl;
				std::cout << "7-Volver al menu principal" << std::endl;
				std::cout << "9- Salir del programa" << std::endl;
				std::cout << "Digite el numero de su opcion: " << std::endl;
				std::cin >> opcion;


				switch (opcion)
				{



				case 1:

					if (pacientes.capacity() < MAXIMOPACIENTES)
					{
						std::cout << "Digite el nombre del paciente: " << std::endl;
						std::cout << std::endl;
						std::cin.ignore();
						std::cin.getline(cadena, 100, '\n');
						paciente1.setNombre(cadena);
						std::cout << "Digite los apellidos del paciente: " << std::endl;
						std::cout << std::endl;
						std::cin.ignore();
						std::cin.getline(cadena, 100, '\n');
						paciente1.setApellidos(cadena);
						std::cout << "Digite el genero del paciente(M/F): " << std::endl;
						std::cout << std::endl;
						std::cin.ignore();
						std::cin.getline(cadena, 100, '\n');
						paciente1.setGenero(cadena);
						std::cout << "Digite la cedula del paciente: " << std::endl;
						std::cout << std::endl;
						std::cin.ignore();
						std::cin.getline(cadena, 100, '\n');
						paciente1.setCedula(cadena);
						std::cout << "Digite la direccion del paciente: " << std::endl;
						std::cout << std::endl;
						std::cin.ignore();
						std::cin.getline(cadena, 100, '\n');
						paciente1.setDireccion(cadena);
						std::cout << "Digite la patologia que presenta el paciente: " << std::endl;
						std::cout << std::endl;
						std::cin.ignore();
						std::cin.getline(cadena, 100, '\n');
						paciente1.setPatologia(cadena);
						std::cout << "Digite el tipo de cirugia: " << std::endl;
						std::cout << std::endl;
						std::cin.ignore();
						std::cin.getline(cadena, 100, '\n');
						paciente1.setTipoCirugia(cadena);
						std::cout << "Digite la prioridad del paciente(Baja/Media/Alta): " << std::endl;
						std::cout << std::endl;
						std::cin.ignore();
						std::cin.getline(cadena, 100, '\n');
						paciente1.setPrioridad(cadena);
						std::cout << "Digite la fecha de la cirugia: " << std::endl;
						std::cout << std::endl;
						std::cin.ignore();
						std::cin.getline(cadena, 100, '\n');
						paciente1.setFechaCirugia(cadena);
						pacientes.push_back(paciente1);
						tamanoPaciente++;
					}
					else
					{
						std::cout << "No se pueden agragar mas pacientes" << std::endl;
					}

					break;



				case 2:


					if (tamanoPaciente > 0)
					{
						for (int _contpac = 0; _contpac < tamanoPaciente; _contpac++)
						{
							std::cout << "Paciente " << _contpac << ": " <<
								pacientes.at(_contpac).imprimirPaciente() << std::endl;
						}

						std::cout << "Digite el numero del paciente que desea eliminar" << std::endl;
						std::cout << std::endl;
						std::cin >> elim;
						pacientes.erase(pacientes.begin() + elim);
						tamanoPaciente--;
						elim = 0;
					}
					else
					{
						std::cout << "No hay ningun paciente registrado " << std::endl;
					}
					break;

				case 3:
					if (tamanoPaciente > 0)
					{

						for (int _contpac = 0; _contpac < pacientes.capacity(); _contpac++)
						{
							std::cout << pacientes.at(_contpac).imprimirPaciente() << std::endl;
						}

					}
					else
					{
						std::cout << "No hay ningun paciente registrado " << std::endl;
					}

					break;

				case 4:
					if (tamanoDoctor > 0)
					{
						for (int cont = 0; cont < tamanoPaciente; cont++)
						{
							std::cout << "Paciente " << cont << ": " <<
								pacientes.at(cont).imprimirPaciente() << std::endl;
						}
						std::cout << "Dijite el numero del paciente al que desea asignarle un doctor" << std::endl;
						std::cin >> seleccione;
						for (int _contdoc = 0; _contdoc < tamanoDoctor; _contdoc++)
						{
							std::cout << "Doctor " << _contdoc << ": " <<
								doctores.at(_contdoc).imprimirDoctor() << std::endl;
						}
						std::cout << "Seleccione al doctor que quiere que se encargue del paciente" << std::endl;
						std::cin >> seleccione2;
						pacientes.at(seleccione).asignarDoctor(doctores.at(seleccione2));
					}

					else
					{
						std::cout << "No hay doctores registrados" << endl;
					}

					break;
				case 9:


					return 0;
				}


			}




		case 2:
			while (opcion != 7)
			{
				std::cout << std::endl << std::endl;
				std::cout << "----------------------------------- Doctores -----------------------------------" << std::endl;
				std::cout << std::endl << std::endl;
				std::cout << "Menu de opciones: " << std::endl;
				std::cout << std::endl << std::endl;
				std::cout << "1-Agregar un doctor: " << std::endl;
				std::cout << "2-Eliminar un doctor: " << std::endl;
				std::cout << "3-Imprimir lista de doctores" << std::endl;
				std::cout << "7-Volver al menu principal" << std::endl;
				std::cout << "9- Salir del programa" << std::endl;
				std::cout << "Digite el numero de su opcion: " << std::endl;
				std::cin >> opcion;


				switch (opcion)
				{






				case 1:

					if (tamanoDoctor < MAXIMODOCTORES)
					{


						std::cout << "Digite el nombre del doctor: " << std::endl;
						std::cout << std::endl;
						std::cin.ignore();
						std::cin.getline(cadena, 50, '\n');
						doctor1.setNombre(cadena);
						std::cout << "Especialidades : " << std::endl;
						std::cout << std::endl;
						for (int _recorre = 0; _recorre < 10; _recorre++)
						{
							std::cout << "Especialidad " << _recorre << " [" << especialidades[_recorre] << "]\n";
						}
						std::cout << "Seleccione la especialidad del doctor" << std::endl;
						std::cin >> numero;
						doctor1.setEspecialidad(especialidades[numero]);
						doctores.push_back(doctor1);
						tamanoDoctor++;
					}
					else
					{
						std::cout << "No se pueden agragar mas doctores" << std::endl;
					}

					break;



				case 2:
					if (tamanoDoctor == 0)
					{
						std::cout << "No hay doctores registrados para mostrar" << std::endl;
						break;
					}
					else


						for (int _contdoc = 0; _contdoc < tamanoDoctor; _contdoc++)
						{
							std::cout << "Doctor " << _contdoc << ": " <<
								doctores.at(_contdoc).imprimirDoctor() << std::endl;
						}

					std::cout << "Digite el numero del doctor que desea eliminar" << std::endl;
					std::cout << std::endl;
					std::cin >> elim;
					doctores.erase(doctores.begin() + elim);
					tamanoDoctor--;
					elim = 0;
					break;

				case 3:
					if (tamanoDoctor > 0)
					{

						for (int _contdoc = 0; _contdoc < tamanoDoctor; _contdoc++)
						{
							std::cout << doctores.at(_contdoc).imprimirDoctor() << std::endl;
						}

					}
					else
					{
						std::cout << "No hay doctores registrados" << endl;
					}
					break;

				case 9:


					return 0;
				}

			}
			
		}
	}
}