
 /*
  * =====================================================================================
  *
  *       Filename:  Doctor.h
  *
  *    Description:  Definicion de la Clase Empleado
  *
  *        Created:  2019-09-05
  *
  *         Author:  Isaac Esquivel
  *
  * =====================================================================================
  */


#ifndef HOSPITAL_DOCTOR_H
#define HOSPITAL_DOCTOR_H

#include "Paciente.h"
#include <string>
#include <vector>

class Doctor
{
private:
	std::string nombre;
	std::string especialidad;
	std::vector <Paciente> pacientes;
	int tamanoPacientes = 0;


public:
	Doctor();
	Doctor(const std::string & nombre, std::string & especialidad);

	void setNombre(std::string);
	std::string getNombre();
	void setEspecialidad(std::string);
	std::string getEspecialidad();
	void asignarPaciente(Paciente &paciente);
	std::string imprimirDoctor();
	std::string imprimirPacientesDoc();
};

#endif //PROYECTO_DOCTOR_H
