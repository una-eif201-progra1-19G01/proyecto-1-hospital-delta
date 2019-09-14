
/*
 * =====================================================================================
 *
 *       Filename:  Paciente.h
 *
 *    Description:  Definición de la Clase Paciente
 *
 *        Created:  2019-09-11
 *
 *         Author:  José Rafael Jiménez
 *
 * =====================================================================================
 */



#ifndef HOSPITAL_PACIENTE_H
#define HOSPITAL_PACIENTE_H


static const int NUMERO_PACIENTES = 200;


#include <iostream>
#include <string>
#include "Cama.h"
#include "Doctor.h"

class Paciente {

private: 
	std::string cedula;
	std::string nombre;
	std::string genero;
	std::string apellidos;
	std::string direccion;
	std::string patologia;
	std::string tipoCirugia;
	bool estado;
	std::string prioridad;
	std::string fechaCirugia;
	std::vector<Cama> camas;
	std::vector<Doctor> doctores;
	int tamanoCamas = 0;
	int tamanoDoctores = 0;


public:
	Paciente();
	Paciente(std::string, std::string, std::string, std::string,std::string, std::string, std::string, std::string, std::string, bool estado);
	bool camasDisponibles(int);
	void setDireccion(std::string);
	void setNombre(std::string);
	void setApellidos(std::string);
	void setCedula(std::string);
	void setPatologia(std::string);
	void setTipoCirugia(std::string);
	void setPrioridad(std::string);
	void setFechaCirugia(std::string);
	void setGenero(std::string);
	void asignarCama(Cama&);
	void asignarDoctor(Doctor&);
	void setEstado(bool);
	std::string getPatologia();
	std::string getDireccion();
	std::string getNombre();
	std::string getApellidos();
	std::string getTipoCirugia();
	std::string getPrioridad();
	std::string getFechaCirugia();
	std::string getCedula();
	std::string getGenero();
	bool getEstado();
	std::string imprimirPaciente();
	std::string imprimirCamaPacientes();
	std::string imprimirDoctorPacientes(int);


};




#endif
