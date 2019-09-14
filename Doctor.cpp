/*
 * =====================================================================================
 *
 *       Filename:  Doctor.cpp
 *
 *    Description:  Implementación de la Clase Doctor
 *
 *        Created:  2019-09-05
 *
 *         Author:  Isaac Esquivel
 *
 * =====================================================================================
 */

#include "Doctor.h"

Doctor::Doctor()
{
}

Doctor::Doctor(const std::string& nombre, std::string& especialidad) : nombre(nombre), especialidad(especialidad)
{

}

void Doctor::setNombre(std::string Nombre)
{
	nombre = Nombre;
}

void Doctor::setEspecialidad(std::string Especialidad)
{
	especialidad = Especialidad;
}


std::string Doctor::getNombre()
{
	return nombre;
}

std::string Doctor::getEspecialidad()
{
	return especialidad;
}



std::string Doctor::imprimirDoctor()
{
	std::string reporte = "";

	reporte = reporte + "NomDoc [" + getNombre() + "] espe [" + getEspecialidad() + "]";
	return reporte;
}




