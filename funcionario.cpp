#include <funcionario.h>

Funcionario::Funcionario(){
}

void Funcionario::setId(int id){
	this->id = id;
}

int Funcionario::getId(){
	return this->id;
}

void Funcionario::setNome(string nome){
	this->nome = nome;
}

string Funcionario::getNome(){
	return this->nome;
}

void Funcionario::setCpf(string cpf){
	this->cpf = cpf;
}

string Funcionario::getCpf(){
	return this->cpf;
}

void Funcionario::setIdade(short idade){
	this->idade = idade;
}

short Funcionario::getIdade(){
	return this->idade;
}

void Funcionario::setTipo_sanguineo(string tipo_sanguineo){
	this->tipo_sanguineo = tipo_sanguineo;
}

string Funcionario::getTipo_sanguineo(){
	return this->tipo_sanguineo;
}

void Funcionario::setFator_rh(char fator_rh){
	this->fator_rh = fator_rh;
}

char Funcionario::getFator_rh(){
	return this->fator_rh;
}

void Funcionario::setEspecialidade(string especialidade){
	this->especialidade = especialidade;
}

string Funcionario::getEspecialidade(){
	return this->especialidade;
};

Funcionario::~Funcionario(){
}
