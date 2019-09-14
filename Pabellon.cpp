
/*
 * =====================================================================================
 *
 *       Filename:  Pabellon.cpp
 *
 *    Description:  Implementación de la Clase Pabellon
 *
 *        Created:  2019-09-11
 *
 *         Author:  José Rafael Jiménez
 *
 * =====================================================================================
 */


#include "Pabellon.h"

Pabellon::Pabellon() {}


void Pabellon::asignarPacientes(Paciente &paciente)
{
	pacientes.push_back(paciente);
	tamanoPacientes++;

}

std::string Pabellon::imprimirPabellonPacientes(int pos)
{
	std::string reporte = "";

	reporte = reporte + pacientes.at(pos).imprimirPaciente();

		return reporte;
}

