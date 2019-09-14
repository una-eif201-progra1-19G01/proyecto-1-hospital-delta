
/*
 * =====================================================================================
 *
 *       Filename:  Cama.h
 *
 *    Description:  Definicion de la Clase Cama
 *
 *        Created:  2019-09-11
 *
 *         Author:  Isaac Esquivel
 *
 * =====================================================================================
 */
#ifndef HOSPITAL_CAMA_H
#define HOSPITAL_CAMA_H

#include <ostream>
#include <string>

class Cama {
	std::string codigo;
	bool estado;

public:
	Cama();

	Cama(const std::string &codigo, bool estado);

	std::string camasDisponibles();

	const std::string &getCodigo() const;

	void setCodigo(const std::string &codigo);

	bool isEstado() const;

	void setEstado(bool estado);


	std::string imprimeCama();
};


#endif //HOSPITAL_CAMA_H