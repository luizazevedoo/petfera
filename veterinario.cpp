##include <veterinario.h>
using namespace std;

Veterinario::Veterinario(int id, string nome, string cpf, short idade, string tipo_sanguineo, char fator_rh, string especialidade, string m_crmv): Funcionario(id, nome, cpf, idade, tipo_sanguineo, fator_rh, especialidade){
	this->m_crmv = m_crmv;
}

void Veterinario::setM_crmv(string m_crmv){
	this->m_crmv = m_crmv;
}

string Veterinario::getM_crmv(){
	return this->m_crmv;
}

void consultar(){
	cout << "Nome: " << this->nome << endl;
	cout << "id: " << this->id << endl;
	cout << "CPF: " << this->cpf << endl;
	cout << "Idade: " << this->idade << endl;
	cout << "Tipo sanguíneo: " << this->tipo_sanguineo << this->fator_rh << endl;
	cout << "Especeialidade: " << this->especialidade << endl;
	cout << "CRMV: " << this->m_crmv << endl;
}

Veterinario::~Veterinario(){
}
