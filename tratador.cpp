#include <tratador.h>

Tratador::Tratador(int id, string nome, string cpf, short idade, string tipo_sanguineo, char fator_rh, string especialidade, int m_nivel_de_seguranca): Funcionario(id, nome, cpf, idade, tipo_sanguineo, fator_rh, especialidade){
	this->m_nivel_de_seguranca = m_nivel_de_seguranca;
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
