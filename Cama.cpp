
/*
 * =====================================================================================
 *
 *       Filename:  Cama.cpp
 *
 *    Description:  Implementación de la Clase Cama
 *
 *        Created:  2019-09-11
 *
 *         Author:  Isaac Esquivel
 *
 * =====================================================================================
 */
#include "Cama.h"

Cama::Cama() {}

Cama::Cama(const std::string &codigo, bool estado) : codigo(codigo), estado(estado) {}


std::string Cama::camasDisponibles() {

	std::string estado = "";

	if (isEstado() == true) {

		estado = "Estado de la cama [Disponible]";
	}
	else
		estado = "Estado de la cama [Ocupada]";

	return estado;

}

const std::string &Cama::getCodigo() const {
	return codigo;
}

void Cama::setCodigo(const std::string &codigo) {
	Cama::codigo = codigo;
}

bool Cama::isEstado() const {
	return estado;
}

void Cama::setEstado(bool estado) {
	Cama::estado = estado;
}

std::string Cama::imprimeCama()
{
	std::string reporte = "";

	reporte = reporte + "Codigo de la cama [" + getCodigo() + "]\n\t"+camasDisponibles();

	return reporte;
}

