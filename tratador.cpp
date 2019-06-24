#include <iostream>
#include "tratador.h"
#include "funcionario.h"

using namespace std;

Tratador::Tratador():Funcionario(){
};

void Tratador::setM_nivel_de_segurança(int m_nivel_de_segurança){
	this->m_nivel_de_segurança = m_nivel_de_segurança;
};

int Tratador::getM_nivel_de_segrança(){
	return this->m_nivel_de_segurança;
};

void consultar(){
	cout << "Nome: " << this->nome << endl;
	cout << "id: " << this->id << endl;
	cout << "CPF: " << this->cpf << endl;
	cout << "Idade: " << this->idade << endl;
	cout << "Tipo sanguíneo: " << this->tipo_sanguineo << this->fator_rh << endl;
	cout << "Especeialidade: " << this->especialidade << endl;
	cout << "Nível de Segurança" << this->m_nivel_de_segurança << endl;
}

Tratador::~Tratador(){
};
