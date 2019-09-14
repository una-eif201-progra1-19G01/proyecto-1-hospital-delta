
/*
 * =====================================================================================
 *
 *       Filename:  Paciente.cpp
 *
 *    Description:  Implementación de la Clase Paciente
 *
 *        Created:  2019-09-11
 *
 *         Author:  José Rafael Jiménez
 *
 * =====================================================================================
 */


#include "Paciente.h"

Paciente::Paciente()
{
}

Paciente::Paciente(std::string nombre, std::string apellidos,std::string genero, std::string direccion, std::string cedula, std::string patologia, std::string cirugia, std::string prioridad, std::string fecha,bool estado)
{
	setNombre(nombre);
	setApellidos(apellidos);
	setGenero(genero);
	setDireccion(direccion);
	setCedula(cedula);
	setPatologia(patologia);
	setTipoCirugia(cirugia);
	setPrioridad(prioridad);
	setFechaCirugia(fecha);
	setEstado(estado);

}


bool Paciente::camasDisponibles(int)
{
	return false;
}

void Paciente::setDireccion(std::string direc)
{
	direccion = direc;
}

void Paciente::setNombre(std::string nom)
{
	nombre = nom;

}

void Paciente::setApellidos(std::string ape)
{
	apellidos = ape;
}


void Paciente::setCedula(std::string cedu)
{
	cedula = cedu;
}

void Paciente::setPatologia(std::string pato)
{
	patologia = pato;
}

void Paciente::setTipoCirugia(std::string ciru)
{
	tipoCirugia = ciru;
}

void Paciente::setPrioridad(std::string pri)
{
	prioridad = pri;
}

void Paciente::setFechaCirugia(std::string fecha)
{
	fechaCirugia = fecha;
}

void Paciente::setGenero(std::string gene)
{
	genero = gene;
}

void Paciente::asignarCama(Cama& cama)
{
	camas.push_back(cama);
	tamanoCamas++;
}

void Paciente::asignarDoctor(Doctor& doctor) {
	doctores.push_back(doctor);
	tamanoDoctores++;
}

void Paciente::eliminarPaciente()
{

}

void Paciente::setEstado(bool estad)
{
	estado = estad;
}

std::string Paciente::getPatologia()
{
	return patologia;
}

std::string Paciente::getDireccion()
{
	return direccion;
}

std::string Paciente::getNombre()
{
	return nombre;
}

std::string Paciente::getApellidos()
{
	return apellidos;
}

std::string Paciente::getTipoCirugia()
{
	return tipoCirugia;
}

std::string Paciente::getPrioridad()
{
	return prioridad;
}

std::string Paciente::getFechaCirugia()
{
	return fechaCirugia;
}


std::string Paciente::getCedula()
{
	return cedula;
}

std::string Paciente::getGenero()
{
	return genero;
}

bool Paciente::getEstado()
{
	return estado;

}
std::string Paciente::imprimirPaciente()
{
	std::string reporte = "";


	reporte = "\n Nombre: " + getNombre() + "\n Apellidos: " + getApellidos() +"\n Genero:"+getGenero()+"\n Cedula:"+ getCedula() +"\n Direccion:"
		+getDireccion()+"\n Patologia:"+getPatologia()+"\n Tipo de cirugia:"+getTipoCirugia()+"\n Prioridad:"+getPrioridad()+"\n Fecha de cirugia: "
		+getFechaCirugia()+"\n";

	return reporte;
}

std::string Paciente::imprimirCamaPacientes()
{
	std::string reporte = "";

	for (int cont = 0; cont < tamanoCamas; cont++)
	{
		reporte = reporte + "\t[" + camas.at(cont).imprimeCama() + "]\n";
	}

	return reporte;

}

std::string Paciente::imprimirDoctorPacientes()
{
	std::string reporte = "";

	for (int cont = 0; cont < tamanoDoctores; cont++)
	{
		reporte = reporte + "\t[" + doctores.at(cont).imprimirDoctor()+ "]\n";
	}

	return reporte;

}